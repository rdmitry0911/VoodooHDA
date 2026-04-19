#include "License.h"

#include "VoodooHDADevice.h"
#include "VoodooHDAEngine.h"
#include "VoodooGFXHDA.h"
#include "VoodooHDAFramebufferNotifier.h"
#include "Verbs.h"

VoodooGFXHDAStream::VoodooGFXHDAStream()
	: mController(NULL), mEngine(NULL), mChannel(NULL),
	  mTimingPollActive(false), mHasPosition(false), mLastPosition(0)
{
}

bool VoodooGFXHDAStream::init(VoodooGFXHDAController *controller, VoodooHDAEngine *engine, Channel *channel)
{
	if (!controller || !engine || !channel)
		return false;

	mController = controller;
	mEngine = engine;
	mChannel = channel;
	resetTimingState();
	return true;
}

bool VoodooGFXHDAStream::hasActiveTimingPoll() const
{
	return mTimingPollActive;
}

void VoodooGFXHDAStream::armTimingPoll()
{
	mTimingPollActive = true;
	resetTimingState();
	if (mController)
		mController->scheduleTimingPoll();
}

void VoodooGFXHDAStream::disarmTimingPoll()
{
	mTimingPollActive = false;
	resetTimingState();
}

void VoodooGFXHDAStream::resetTimingState()
{
	mHasPosition = false;
	mLastPosition = 0;
}

bool VoodooGFXHDAStream::pollTimingProgress()
{
	UInt32 position;
	bool valid = false;

	if (!mTimingPollActive || !mController || !mEngine || !mChannel ||
	    !(mChannel->flags & HDAC_CHN_RUNNING))
		return false;

	position = mController->getLinkPosition(mChannel, &valid);
	if (!valid)
		return false;

	if (!mHasPosition || position != mLastPosition) {
		mLastPosition = position;
		mHasPosition = true;
		mEngine->takeTimeStamp(false);
		return true;
	}

	return false;
}

UInt32 VoodooGFXHDAStream::getCurrentSampleFrame()
{
	UInt32 position;
	UInt32 frame;
	bool valid = false;

	if (mHasPosition)
		position = mLastPosition;
	else {
		position = mController ? mController->getLinkPosition(mChannel, &valid) : 0;
		if (!valid)
			return 0;
	}

	if (!mEngine->mSampleSize)
		return 0;

	frame = position / mEngine->mSampleSize;
	return (frame < mEngine->mNumSampleFrames) ? frame : 0;
}

VoodooGFXHDAController::VoodooGFXHDAController()
	: mDevice(NULL), mNumStreams(0)
{
	bzero(mStreams, sizeof(mStreams));
}

bool VoodooGFXHDAController::init(VoodooHDADevice *device)
{
	if (!device)
		return false;

	mDevice = device;
	mNumStreams = 0;
	bzero(mStreams, sizeof(mStreams));
	return true;
}

void VoodooGFXHDAController::registerStream(Channel *channel, VoodooGFXHDAStream *stream)
{
	if (!channel || !stream)
		return;

	for (int i = 0; i < mNumStreams; i++) {
		if (mStreams[i].channel != channel)
			continue;
		mStreams[i].stream = stream;
		return;
	}

	if (mNumStreams >= static_cast<int>(sizeof(mStreams) / sizeof(mStreams[0])))
		return;

	mStreams[mNumStreams].channel = channel;
	mStreams[mNumStreams].stream = stream;
	mNumStreams++;
}

void VoodooGFXHDAController::unregisterStream(Channel *channel, VoodooGFXHDAStream *stream)
{
	for (int i = 0; i < mNumStreams; i++) {
		if (mStreams[i].channel != channel || mStreams[i].stream != stream)
			continue;
		for (int j = i + 1; j < mNumStreams; j++)
			mStreams[j - 1] = mStreams[j];
		mNumStreams--;
		mStreams[mNumStreams].channel = NULL;
		mStreams[mNumStreams].stream = NULL;
		return;
	}
}

VoodooGFXHDAStream *VoodooGFXHDAController::lookupStream(Channel *channel)
{
	for (int i = 0; i < mNumStreams; i++) {
		if (mStreams[i].channel == channel)
			return mStreams[i].stream;
	}
	return NULL;
}

void VoodooGFXHDAController::updateTiming(Channel *channel, bool active, bool primeNow)
{
	VoodooGFXHDAStream *stream = lookupStream(channel);

	if (!stream)
		return;

	if (!active) {
		stream->disarmTimingPoll();
		return;
	}

	stream->armTimingPoll();
	if (primeNow)
		stream->pollTimingProgress();
}

UInt32 VoodooGFXHDAController::getLinkPosition(Channel *channel, bool *valid)
{
	UInt32 position = 0;
	UInt32 bufferBytes;

	if (valid)
		*valid = false;
	if (!mDevice || !channel)
		return 0;

	bufferBytes = channel->blockSize * channel->numBlocks - channel->slack;
	if (bufferBytes == 0)
		return 0;

	mDevice->lock(__FUNCTION__);

	if (channel->dmaPos && !(channel->pcmDevice && channel->pcmDevice->digital >= 2))
		position = *(channel->dmaPos);
	else
		position = mDevice->readData32(channel->off + HDAC_SDLPIB);

	mDevice->unlock(__FUNCTION__);

	if (position >= bufferBytes)
		return 0;
	if (valid)
		*valid = true;

	return position;
}

void VoodooGFXHDAController::setupStream(Channel *channel, nid_t dac, AudioAssoc *assoc, int totalchn, int totalext)
{
	FunctionGroup *funcGroup = channel->funcGroup;
	UInt8 csum;
	UInt16 AudioInfopacketBufferSize = 0xFFFFU;
	nid_t cad = funcGroup->codec->cad;
	nid_t nid_pin;
	Widget *widget_pin;
	bool atiCodec = isAtiHdmiCodec(funcGroup->codec);
	IOLog("VoodooHDA HDMI: streamSetup dac=%d ati=%d totalchn=%d totalext=%d codec=0x%04x:0x%04x\n",
	      dac, atiCodec, totalchn, totalext, funcGroup->codec->vendorId, funcGroup->codec->deviceId);

	const static UInt8 hdmica[2][8] =
	{{ 0x02, 0x00, 0x04, 0x08, 0x0a, 0x0e, 0x12, 0x12 },
	 { 0x01, 0x03, 0x01, 0x03, 0x09, 0x0b, 0x0f, 0x13 }};
	const static UInt32 hdmich[2][8] =
	{{ 0xFFFF0F00, 0xFFFFFF10, 0xFFF2FF10, 0xFF32FF10,
	   0xFF324F10, 0xF5324F10, 0x54326F10, 0x54326F10 },
	 { 0xFFFFF000, 0xFFFF0100, 0xFFFFF210, 0xFFFF2310,
	   0xFF32F410, 0xFF324510, 0xF6324510, 0x76325410 }};

	for (int j = 0; j < 16; j++) {
		if (assoc->dacs[j] != dac)
			continue;
		nid_pin = assoc->pins[j];
		widget_pin = mDevice->widgetGet(funcGroup, nid_pin);
		if (!widget_pin)
			continue;
		if (!HDA_PARAM_PIN_CAP_DP(widget_pin->pin.cap) &&
		    !HDA_PARAM_PIN_CAP_HDMI(widget_pin->pin.cap))
			continue;

		if (atiCodec && mDevice->mFBNotifier)
			mDevice->mFBNotifier->ensureAudioPipeEnabled(cad, nid_pin);

		IOLog("VoodooHDA HDMI: streamSetup nid_pin=%d dac=%d eld_len=%d (before re-read) pinCap=0x%08x\n",
		      nid_pin, dac, widget_pin->eld_len, (unsigned)widget_pin->pin.cap);
		mDevice->hdaa_eld_handler(widget_pin);
		IOLog("VoodooHDA HDMI: streamSetup nid_pin=%d eld_len=%d (after re-read)\n",
		      nid_pin, widget_pin->eld_len);

		UInt32 dipSizeTest = mDevice->sendCommand(HDA_CMD_GET_HDMI_DIP_SIZE(cad, nid_pin, 0x00), cad);
		bool useStandardPath = (dipSizeTest != HDA_INVALID) && ((dipSizeTest & 0xff) > 0);

		IOLog("VoodooHDA HDMI: streamSetup nid_pin=%d DIP_SIZE(0x00)=0x%08x -> useStandard=%d ati=%d\n",
		      nid_pin, (unsigned)dipSizeTest, useStandardPath, atiCodec);

		if (atiCodec && !useStandardPath) {
			int ca = hdmica[totalext == 0 ? 0 : 1][totalchn - 1];
			IOLog("VoodooHDA HDMI: ATI verb path nid_pin=%d ca=0x%02x totalchn=%d\n",
			      nid_pin, ca, totalchn);

			static const UInt16 ati_paired_verbs[4] = {
				ATI_VERB_SET_MULTICHANNEL_01,
				ATI_VERB_SET_MULTICHANNEL_23,
				ATI_VERB_SET_MULTICHANNEL_45,
				ATI_VERB_SET_MULTICHANNEL_67
			};

			for (int k = 0; k < 4; k++) {
				int base_slot = k * 2;
				int enable = (base_slot < totalchn) ? 1 : 0;
				UInt32 val = (base_slot << 4) | enable;
				mDevice->sendCommand(ATI_CMD_12BIT(cad, nid_pin, ati_paired_verbs[k], val), cad);
				IOLog("VoodooHDA HDMI: ATI MC%d%d=0x%02x\n", base_slot, base_slot + 1, val);
			}

			mDevice->sendCommand(ATI_CMD_12BIT(cad, nid_pin, ATI_VERB_SET_CHANNEL_ALLOCATION, ca), cad);
			IOLog("VoodooHDA HDMI: ATI CA=0x%02x pinCtrl=0x%02x\n", ca, widget_pin->pin.ctrl);

			if (HDA_PARAM_PIN_CAP_HDMI(widget_pin->pin.cap) &&
			    HDA_PARAM_PIN_CAP_HBR(widget_pin->pin.cap)) {
				UInt32 hbr = ((channel->format & AFMT_AC3) && (totalchn == 8)) ? ATI_HBR_ENABLE : 0;
				mDevice->sendCommand(ATI_CMD_12BIT(cad, nid_pin, ATI_VERB_SET_HBR_CONTROL, hbr), cad);
			}

			mDevice->logMsg("ATI HDMI verb path: nid=%d ca=0x%02x totalchn=%d\n", nid_pin, ca, totalchn);

			widget_pin->pin.ctrl |= 0x40;
			mDevice->sendCommand(HDA_CMD_SET_PIN_WIDGET_CTRL(cad, nid_pin, widget_pin->pin.ctrl), cad);

			for (int k = 0; k < 8; k++) {
				UInt16 slotVerb;
				if (k < totalchn)
					slotVerb = (((hdmich[totalext == 0 ? 0 : 1][totalchn - 1] >> (k * 4)) & 0xf) << 4) | k;
				else
					slotVerb = 0xf0 | k;
				mDevice->sendCommand(HDA_CMD_SET_HDMI_CHAN_SLOT(cad, nid_pin, slotVerb), cad);
			}

			{
				int caAti = hdmica[totalext == 0 ? 0 : 1][totalchn - 1];
				UInt8 csumAti = -(0x84 + 0x01 + 0x0a + (totalchn - 1) + caAti);

				mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_INDEX(cad, nid_pin, 0x00), cad);
				mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_XMIT(cad, nid_pin, 0x00), cad);
				mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_INDEX(cad, nid_pin, 0x00), cad);
				mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_DATA(cad, nid_pin, 0x84), cad);
				mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_DATA(cad, nid_pin, 0x01), cad);
				mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_DATA(cad, nid_pin, 0x0a), cad);
				mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_DATA(cad, nid_pin, csumAti), cad);
				mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_DATA(cad, nid_pin, totalchn - 1), cad);
				mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_DATA(cad, nid_pin, 0x00), cad);
				mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_DATA(cad, nid_pin, 0x00), cad);
				mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_DATA(cad, nid_pin, caAti), cad);
				mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_INDEX(cad, nid_pin, 0x00), cad);
				mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_XMIT(cad, nid_pin, 0xc0), cad);
			}
			IOLog("VoodooHDA HDMI: ATI path + CHAN_SLOT + InfoFrame + DIP_XMIT=0xc0 nid=%d ca=0x%02x chn=%d\n",
			      nid_pin, hdmica[totalext == 0 ? 0 : 1][totalchn - 1], totalchn);
			continue;
		}

		IOLog("VoodooHDA HDMI: standard HDA path nid_pin=%d\n", nid_pin);

		for (int k = 0; k < 8; k++)
			mDevice->sendCommand(HDA_CMD_SET_HDMI_CHAN_SLOT(cad, nid_pin,
				(((hdmich[totalext == 0 ? 0 : 1][totalchn - 1] >> (k * 4)) & 0xf) << 4) | k), cad);

		if (HDA_PARAM_PIN_CAP_HDMI(widget_pin->pin.cap) &&
		    HDA_PARAM_PIN_CAP_HBR(widget_pin->pin.cap)) {
			widget_pin->pin.ctrl &= ~HDA_CMD_SET_PIN_WIDGET_CTRL_VREF_ENABLE_MASK;
			if ((channel->format & AFMT_AC3) && (totalchn == 8))
				widget_pin->pin.ctrl |= 0x03;
			mDevice->sendCommand(HDA_CMD_SET_PIN_WIDGET_CTRL(cad, nid_pin, widget_pin->pin.ctrl), cad);
		}

		if (AudioInfopacketBufferSize == 0xFFFFU) {
			AudioInfopacketBufferSize = static_cast<UInt16>(mDevice->sendCommand(HDA_CMD_GET_HDMI_DIP_SIZE(cad, nid_pin, 0x00), cad)) + 1U;
			IOLog("VoodooHDA HDMI: nid_pin=%d AudioInfopacketBufferSize=%u\n", nid_pin, AudioInfopacketBufferSize);
		}

		if (AudioInfopacketBufferSize < 10U) {
			IOLog("VoodooHDA HDMI: nid_pin=%d infoframe buffer too small (%u), skipping\n",
			      nid_pin, AudioInfopacketBufferSize);
			continue;
		}

		mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_INDEX(cad, nid_pin, 0x00), cad);
		mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_XMIT(cad, nid_pin, 0x00), cad);
		mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_INDEX(cad, nid_pin, 0x00), cad);
		for (int k = 0; k < static_cast<int>(AudioInfopacketBufferSize); k++)
			mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_DATA(cad, nid_pin, 0x00), cad);

		mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_INDEX(cad, nid_pin, 0x00), cad);
		bool isDP_conn = widget_pin->eld != NULL && widget_pin->eld_len >= 6 && ((widget_pin->eld[5] >> 2) & 0x3) == 1;
		IOLog("VoodooHDA HDMI: nid_pin=%d infoframe: eld_len=%d conn_type=%s ca=0x%02x totalchn=%d\n",
		      nid_pin, widget_pin->eld_len, isDP_conn ? "DP" : "HDMI",
		      hdmica[totalext == 0 ? 0 : 1][totalchn - 1], totalchn);
#if DP_AUDIO
		if (isDP_conn) {
			mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_DATA(cad, nid_pin, 0x84), cad);
			mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_DATA(cad, nid_pin, 0x1b), cad);
			mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_DATA(cad, nid_pin, 0x44), cad);
			mDevice->logMsg("DP Audio infoframe\n");
		} else {
#endif
			mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_DATA(cad, nid_pin, 0x84), cad);
			mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_DATA(cad, nid_pin, 0x01), cad);
			mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_DATA(cad, nid_pin, 0x0a), cad);
			mDevice->logMsg("HDMI Audio infoframe\n");

			csum = 0;
			csum -= 0x84 + 0x01 + 0x0a + (totalchn - 1) + hdmica[totalext == 0 ? 0 : 1][totalchn - 1];
			mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_DATA(cad, nid_pin, csum), cad);
#if DP_AUDIO
		}
#endif
		mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_DATA(cad, nid_pin, totalchn - 1), cad);
		mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_DATA(cad, nid_pin, 0x00), cad);
		mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_DATA(cad, nid_pin, 0x00), cad);
		mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_DATA(cad, nid_pin, hdmica[totalext == 0 ? 0 : 1][totalchn - 1]), cad);
		mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_INDEX(cad, nid_pin, 0x00), cad);
		mDevice->sendCommand(HDA_CMD_SET_HDMI_DIP_XMIT(cad, nid_pin, 0xc0), cad);
	}
}

void VoodooGFXHDAController::scheduleTimingPoll()
{
	if (mDevice)
		mDevice->scheduleDigitalHDMIPoll();
}

VoodooHDADevice *VoodooGFXHDAController::getDevice() const
{
	return mDevice;
}
