#include "License.h"

#include "VoodooHDAFramebufferNotifier.h"
#include "VoodooHDADevice.h"
#include "Verbs.h"

#include <IOKit/pci/IOPCIDevice.h>
#include <IOKit/graphics/IOFramebuffer.h>
#include <IOKit/graphics/IOGraphicsTypes.h>

OSDefineMetaClassAndStructors(VoodooHDAFramebufferNotifier, OSObject)

#undef super
#define super OSObject

#define FBLOG(fmt, ...) IOLog("VoodooHDA FB: " fmt "\n", ##__VA_ARGS__)

/* ---------- lifecycle ---------- */

VoodooHDAFramebufferNotifier *
VoodooHDAFramebufferNotifier::withDevice(VoodooHDADevice *device)
{
	VoodooHDAFramebufferNotifier *me = new VoodooHDAFramebufferNotifier;
	if (me && !me->init(device)) {
		me->release();
		return NULL;
	}
	return me;
}

bool VoodooHDAFramebufferNotifier::init(VoodooHDADevice *device)
{
	if (!super::init())
		return false;

	mDevice = device;
	mGFXMatchNotifier = NULL;
	mGFXTermNotifier = NULL;
	mNumConnections = 0;
	mATIPinCount = 0;
	mATIPinCad = -1;
	mHDAPciDevice = device->mPciNub;
	mLock = IOLockAlloc();
	if (!mLock) return false;

	bzero(mConnections, sizeof(mConnections));
	bzero(mATIPinNids, sizeof(mATIPinNids));

	FBLOG("init: HDA PCI device=%p", mHDAPciDevice);
	return true;
}

void VoodooHDAFramebufferNotifier::free()
{
	stopMatching();
	if (mLock) {
		IOLockFree(mLock);
		mLock = NULL;
	}
	super::free();
}

/* ---------- pin registration ---------- */

void VoodooHDAFramebufferNotifier::registerATIPins(int cad, nid_t *pinNids, int count)
{
	IOLockLock(mLock);
	mATIPinCad = cad;
	mATIPinCount = (count > VHDA_FB_MAX_PINS) ? VHDA_FB_MAX_PINS : count;
	for (int i = 0; i < mATIPinCount; i++)
		mATIPinNids[i] = pinNids[i];
	FBLOG("registerATIPins: cad=%d count=%d nids=[%d,%d,%d,%d,%d,%d]",
	      cad, mATIPinCount,
	      mATIPinCount > 0 ? mATIPinNids[0] : -1,
	      mATIPinCount > 1 ? mATIPinNids[1] : -1,
	      mATIPinCount > 2 ? mATIPinNids[2] : -1,
	      mATIPinCount > 3 ? mATIPinNids[3] : -1,
	      mATIPinCount > 4 ? mATIPinNids[4] : -1,
	      mATIPinCount > 5 ? mATIPinNids[5] : -1);
	IOLockUnlock(mLock);
}

/* ---------- IOService matching ---------- */

void VoodooHDAFramebufferNotifier::startMatching()
{
	/* Match IOFramebuffer services from AMD GPUs */
	OSDictionary *matchDict = IOService::serviceMatching("IOFramebuffer");
	if (!matchDict) {
		FBLOG("startMatching: failed to create matching dict");
		return;
	}

	FBLOG("startMatching: registering for IOFramebuffer notifications");

	mGFXMatchNotifier = IOService::addMatchingNotification(
		gIOMatchedNotification, matchDict,
		&VoodooHDAFramebufferNotifier::gfxMatchedHandler,
		this, NULL, 0);

	/* addMatchingNotification consumes one reference to matchDict,
	 * but we need a second dict for the termination notifier */
	matchDict = IOService::serviceMatching("IOFramebuffer");
	if (matchDict) {
		mGFXTermNotifier = IOService::addMatchingNotification(
			gIOTerminatedNotification, matchDict,
			&VoodooHDAFramebufferNotifier::gfxTerminatedHandler,
			this, NULL, 0);
	}
}

void VoodooHDAFramebufferNotifier::stopMatching()
{
	IOLockLock(mLock);
	for (int i = 0; i < mNumConnections; i++) {
		FBConnectionState *conn = &mConnections[i];
		if (conn->fbNotifier) {
			conn->fbNotifier->remove();
			conn->fbNotifier = NULL;
		}
		if (conn->edidData) {
			IOFree(conn->edidData, conn->edidLen);
			conn->edidData = NULL;
		}
		if (conn->eld) {
			IOFree(conn->eld, conn->eldLen);
			conn->eld = NULL;
		}
		conn->framebuffer = NULL;
	}
	mNumConnections = 0;
	IOLockUnlock(mLock);

	if (mGFXMatchNotifier) {
		mGFXMatchNotifier->remove();
		mGFXMatchNotifier = NULL;
	}
	if (mGFXTermNotifier) {
		mGFXTermNotifier->remove();
		mGFXTermNotifier = NULL;
	}
	FBLOG("stopMatching: all notifiers removed");
}

/* ---------- PCI topology matching ---------- */

bool VoodooHDAFramebufferNotifier::isSameGPU(IOService *fbService)
{
	if (!mHDAPciDevice || !fbService) return false;

	/* Walk up the provider chain from the framebuffer to find its IOPCIDevice */
	IOService *provider = fbService;
	IOPCIDevice *fbPCI = NULL;
	for (int depth = 0; depth < 10 && provider; depth++) {
		fbPCI = OSDynamicCast(IOPCIDevice, provider);
		if (fbPCI) break;
		provider = provider->getProvider();
	}
	if (!fbPCI) return false;

	/* Check vendor is AMD/ATI */
	UInt16 fbVendor = fbPCI->configRead16(kIOPCIConfigVendorID);
	if (fbVendor != 0x1002) {
		FBLOG("isSameGPU: fbPCI vendor=0x%04x, not AMD", fbVendor);
		return false;
	}

	/*
	 * GPU display is PCI function 0, HDA audio is function 1.
	 * They share the same bus and device number.
	 * Compare the parent (PCI bridge) — they must be siblings.
	 */
	IOService *hdaParent = mHDAPciDevice->getProvider();
	IOService *fbParent = fbPCI->getProvider();

	bool same = (hdaParent && fbParent && hdaParent == fbParent);
	FBLOG("isSameGPU: fbPCI=%p (vendor=0x%04x) hdaParent=%p fbParent=%p -> %s",
	      fbPCI, fbVendor, hdaParent, fbParent, same ? "YES" : "NO");
	return same;
}

/* ---------- matching callbacks ---------- */

bool VoodooHDAFramebufferNotifier::gfxMatchedHandler(
	void *target, void *refCon, IOService *newService, IONotifier *notifier)
{
	VoodooHDAFramebufferNotifier *self = (VoodooHDAFramebufferNotifier *)target;
	IOFramebuffer *fb = OSDynamicCast(IOFramebuffer, newService);
	if (!fb) return true; /* continue matching */

	FBLOG("gfxMatchedHandler: IOFramebuffer=%p class=%s",
	      fb, fb->getMetaClass()->getClassName());

	if (!self->isSameGPU(newService)) {
		FBLOG("gfxMatchedHandler: not our GPU, skipping");
		return true;
	}

	self->handleFramebufferMatched(fb);
	return true;
}

bool VoodooHDAFramebufferNotifier::gfxTerminatedHandler(
	void *target, void *refCon, IOService *service, IONotifier *notifier)
{
	VoodooHDAFramebufferNotifier *self = (VoodooHDAFramebufferNotifier *)target;
	IOFramebuffer *fb = OSDynamicCast(IOFramebuffer, service);
	if (fb) self->handleFramebufferTerminated(fb);
	return true;
}

/* ---------- framebuffer attach/detach ---------- */

void VoodooHDAFramebufferNotifier::handleFramebufferMatched(IOFramebuffer *fb)
{
	IOLockLock(mLock);

	if (mNumConnections >= VHDA_FB_MAX_CONNECTIONS) {
		FBLOG("handleFBMatched: max connections reached, ignoring fb=%p", fb);
		IOLockUnlock(mLock);
		return;
	}

	/* Check if already registered */
	for (int i = 0; i < mNumConnections; i++) {
		if (mConnections[i].framebuffer == fb) {
			FBLOG("handleFBMatched: fb=%p already registered at slot %d", fb, i);
			IOLockUnlock(mLock);
			return;
		}
	}

	int idx = mNumConnections++;
	FBConnectionState *conn = &mConnections[idx];
	bzero(conn, sizeof(*conn));
	conn->framebuffer = fb;
	conn->mappedPinNid = -1;
	conn->mappedCodecCad = -1;

	/* Map this framebuffer to a pin widget */
	mapConnectionToPin(conn, idx);

	/* Register for framebuffer events */
	conn->fbNotifier = fb->addFramebufferNotification(
		&VoodooHDAFramebufferNotifier::framebufferEventHandler,
		(OSObject *)this, conn);

	FBLOG("handleFBMatched: registered fb=%p at slot %d, notifier=%p, pin=%d",
	      fb, idx, conn->fbNotifier, conn->mappedPinNid);

	/* Try reading EDID immediately — display may already be connected */
	if (readEDID(conn) && parseEDIDAudio(conn)) {
		buildELDFromEDID(conn);
		conn->edidValid = true;
		conn->displayOnline = true;
		FBLOG("handleFBMatched: EDID valid at attach, spkalloc=0x%02x nsads=%d",
		      conn->speakerAllocation, conn->numSADs);
		enableAudioPipe(conn);
		injectELDIntoWidget(conn);
	}

	IOLockUnlock(mLock);
}

void VoodooHDAFramebufferNotifier::handleFramebufferTerminated(IOFramebuffer *fb)
{
	IOLockLock(mLock);
	for (int i = 0; i < mNumConnections; i++) {
		FBConnectionState *conn = &mConnections[i];
		if (conn->framebuffer != fb) continue;

		FBLOG("handleFBTerminated: fb=%p slot=%d", fb, i);
		if (conn->fbNotifier) {
			conn->fbNotifier->remove();
			conn->fbNotifier = NULL;
		}
		clearWidgetELD(conn);
		if (conn->edidData) { IOFree(conn->edidData, conn->edidLen); conn->edidData = NULL; }
		if (conn->eld) { IOFree(conn->eld, conn->eldLen); conn->eld = NULL; }

		/* Compact the array */
		for (int j = i; j < mNumConnections - 1; j++)
			mConnections[j] = mConnections[j + 1];
		mNumConnections--;
		break;
	}
	IOLockUnlock(mLock);
}

/* ---------- framebuffer event handler ---------- */

IOReturn VoodooHDAFramebufferNotifier::framebufferEventHandler(
	OSObject *obj, void *ref, IOFramebuffer *framebuffer, IOIndex event, void *info)
{
	VoodooHDAFramebufferNotifier *self = (VoodooHDAFramebufferNotifier *)obj;
	FBConnectionState *conn = (FBConnectionState *)ref;

	if (!self || !conn) return kIOReturnBadArgument;
	self->handleEvent(conn, event, info);
	return kIOReturnSuccess;
}

void VoodooHDAFramebufferNotifier::handleEvent(
	FBConnectionState *conn, IOIndex event, void *info)
{
	switch (event) {
	case kIOFBNotifyOnlineChange: {
		bool online = (info != NULL);
		FBLOG("event: OnlineChange fb=%p pin=%d online=%d", conn->framebuffer, conn->mappedPinNid, online);
		if (online && !conn->displayOnline) {
			conn->displayOnline = true;
			if (readEDID(conn) && parseEDIDAudio(conn)) {
				buildELDFromEDID(conn);
				conn->edidValid = true;
				enableAudioPipe(conn);
				injectELDIntoWidget(conn);
			}
		} else if (!online && conn->displayOnline) {
			conn->displayOnline = false;
			conn->edidValid = false;
			disableAudioPipe(conn);
			clearWidgetELD(conn);
		}
		break;
	}

	case kIOFBNotifyDidPowerOn:
		FBLOG("event: DidPowerOn fb=%p pin=%d", conn->framebuffer, conn->mappedPinNid);
		if (conn->displayOnline && !conn->edidValid) {
			if (readEDID(conn) && parseEDIDAudio(conn)) {
				buildELDFromEDID(conn);
				conn->edidValid = true;
				enableAudioPipe(conn);
				injectELDIntoWidget(conn);
			}
		}
		break;

	case kIOFBNotifyHDACodecDidPowerOn:
		FBLOG("event: HDACodecDidPowerOn fb=%p pin=%d edidValid=%d",
		      conn->framebuffer, conn->mappedPinNid, conn->edidValid);
		if (conn->edidValid && !conn->audioPipeEnabled) {
			enableAudioPipe(conn);
			injectELDIntoWidget(conn);
		}
		break;

	case kIOFBNotifyDisplayModeDidChange:
		FBLOG("event: DisplayModeDidChange fb=%p pin=%d", conn->framebuffer, conn->mappedPinNid);
		if (conn->displayOnline) {
			/* Re-read EDID — audio caps may change with mode */
			if (readEDID(conn) && parseEDIDAudio(conn)) {
				buildELDFromEDID(conn);
				conn->edidValid = true;
				enableAudioPipe(conn);
				injectELDIntoWidget(conn);
			}
		}
		break;

	case kIOFBNotifyWillPowerOff:
		FBLOG("event: WillPowerOff fb=%p pin=%d", conn->framebuffer, conn->mappedPinNid);
		conn->audioPipeEnabled = false;
		break;

	case kIOFBNotifyProbed:
		FBLOG("event: Probed fb=%p pin=%d", conn->framebuffer, conn->mappedPinNid);
		if (!conn->edidValid) {
			if (readEDID(conn) && parseEDIDAudio(conn)) {
				buildELDFromEDID(conn);
				conn->edidValid = true;
				enableAudioPipe(conn);
				injectELDIntoWidget(conn);
			}
		}
		break;

	default:
		break; /* ignore other events */
	}
}

/* ---------- pin mapping ---------- */

void VoodooHDAFramebufferNotifier::mapConnectionToPin(FBConnectionState *conn, int connIndex)
{
	/*
	 * ATI GPUs: pin widgets are at NIDs 3,5,7,9,11,13 — mapped in order
	 * to framebuffer connection indices 0,1,2,3,4,5.
	 */
	if (mATIPinCount > 0 && connIndex < mATIPinCount) {
		conn->mappedPinNid = mATIPinNids[connIndex];
		conn->mappedCodecCad = mATIPinCad;
		FBLOG("mapConnectionToPin: connIndex=%d -> pin nid=%d cad=%d",
		      connIndex, conn->mappedPinNid, conn->mappedCodecCad);
	} else {
		FBLOG("mapConnectionToPin: connIndex=%d has no ATI pin (pinCount=%d)",
		      connIndex, mATIPinCount);
	}
}

/* ---------- EDID reading ---------- */

bool VoodooHDAFramebufferNotifier::readEDID(FBConnectionState *conn)
{
	if (!conn->framebuffer) return false;

	/* Free old EDID */
	if (conn->edidData) {
		IOFree(conn->edidData, conn->edidLen);
		conn->edidData = NULL;
		conn->edidLen = 0;
	}

	/* Try getProperty first — most reliable */
	OSData *edidProp = OSDynamicCast(OSData, conn->framebuffer->getProperty(kIODisplayEDIDKey));
	if (edidProp && edidProp->getLength() >= 128) {
		conn->edidLen = edidProp->getLength();
		conn->edidData = (uint8_t *)IOMalloc(conn->edidLen);
		if (conn->edidData) {
			memcpy(conn->edidData, edidProp->getBytesNoCopy(), conn->edidLen);
			FBLOG("readEDID: pin=%d got %d bytes from property", conn->mappedPinNid, conn->edidLen);
			return true;
		}
	}

	FBLOG("readEDID: pin=%d no EDID available", conn->mappedPinNid);
	return false;
}

/* ---------- EDID CEA audio parsing ---------- */

bool VoodooHDAFramebufferNotifier::parseEDIDAudio(FBConnectionState *conn)
{
	if (!conn->edidData || conn->edidLen < 128) return false;

	conn->speakerAllocation = 0;
	conn->numSADs = 0;
	bzero(conn->sads, sizeof(conn->sads));

	/* Validate base EDID checksum */
	uint8_t cksum = 0;
	for (int i = 0; i < 128; i++) cksum += conn->edidData[i];
	if (cksum != 0) {
		FBLOG("parseEDIDAudio: pin=%d base EDID checksum failed (0x%02x)", conn->mappedPinNid, cksum);
		/* Continue anyway — some EDIDs have bad checksums */
	}

	/* Check for CEA extension block */
	int numExtensions = conn->edidData[126];
	if (numExtensions == 0 || conn->edidLen < 256) {
		FBLOG("parseEDIDAudio: pin=%d no CEA extension (ext=%d edidLen=%d)",
		      conn->mappedPinNid, numExtensions, conn->edidLen);
		/* No CEA block — construct minimal ELD with stereo LPCM */
		conn->speakerAllocation = 0x01; /* FL/FR only */
		/* SAD for stereo 16-bit LPCM at 48/44.1/32 kHz */
		conn->sads[0] = 0x09; /* LPCM, 2ch */
		conn->sads[1] = 0x07; /* 32/44.1/48 kHz */
		conn->sads[2] = 0x01; /* 16-bit */
		conn->numSADs = 1;
		FBLOG("parseEDIDAudio: pin=%d no CEA, using default stereo LPCM", conn->mappedPinNid);
		return true;
	}

	uint8_t *cea = &conn->edidData[128];

	/* CEA-861 extension tag must be 0x02 */
	if (cea[0] != 0x02) {
		FBLOG("parseEDIDAudio: pin=%d CEA tag=0x%02x (expected 0x02)", conn->mappedPinNid, cea[0]);
		return false;
	}

	int dtdOffset = cea[2];
	bool basicAudio = (cea[3] & 0x40) != 0;
	FBLOG("parseEDIDAudio: pin=%d CEA rev=%d dtdOffset=%d basicAudio=%d",
	      conn->mappedPinNid, cea[1], dtdOffset, basicAudio);

	if (!basicAudio) {
		FBLOG("parseEDIDAudio: pin=%d display does not support basic audio", conn->mappedPinNid);
		return false;
	}

	/* Parse data blocks (bytes 4..dtdOffset-1) */
	int pos = 4;
	while (pos < dtdOffset && pos < 127) {
		int tag = (cea[pos] >> 5) & 0x07;
		int blockLen = cea[pos] & 0x1f;
		pos++;

		if (pos + blockLen > dtdOffset) break;

		if (tag == 1) {
			/* Audio Data Block — contains SADs (3 bytes each) */
			int nSADs = blockLen / 3;
			for (int i = 0; i < nSADs && conn->numSADs < VHDA_FB_MAX_SADS; i++) {
				int off = conn->numSADs * 3;
				conn->sads[off + 0] = cea[pos + i * 3 + 0];
				conn->sads[off + 1] = cea[pos + i * 3 + 1];
				conn->sads[off + 2] = cea[pos + i * 3 + 2];
				conn->numSADs++;
			}
			FBLOG("parseEDIDAudio: pin=%d Audio Data Block: %d SADs", conn->mappedPinNid, nSADs);
		} else if (tag == 4) {
			/* Speaker Allocation Data Block */
			if (blockLen >= 1) {
				conn->speakerAllocation = cea[pos];
				FBLOG("parseEDIDAudio: pin=%d Speaker Allocation: 0x%02x", conn->mappedPinNid, cea[pos]);
			}
		}
		/* Skip other block types (video, vendor specific, etc.) */

		pos += blockLen;
	}

	/* If we got SADs but no speaker allocation, default to FL/FR */
	if (conn->numSADs > 0 && conn->speakerAllocation == 0)
		conn->speakerAllocation = 0x01;

	FBLOG("parseEDIDAudio: pin=%d result: spkalloc=0x%02x nsads=%d",
	      conn->mappedPinNid, conn->speakerAllocation, conn->numSADs);
	return (conn->numSADs > 0);
}

/* ---------- ELD construction ---------- */

void VoodooHDAFramebufferNotifier::buildELDFromEDID(FBConnectionState *conn)
{
	/* Free old ELD */
	if (conn->eld) {
		IOFree(conn->eld, conn->eldLen);
		conn->eld = NULL;
		conn->eldLen = 0;
	}

	/*
	 * Build ELD (EDID-Like Data) per CEA-861-D.
	 * Layout: header (4 bytes) + baseline block (4 + MNL + SADs*3)
	 * We use MNL=0 (no monitor name) for simplicity.
	 */
	int mnl = 0;
	int baselineLen = 4 + mnl + conn->numSADs * 3;
	int totalLen = 4 + baselineLen;

	conn->eld = (uint8_t *)IOMalloc(totalLen);
	if (!conn->eld) return;
	conn->eldLen = totalLen;
	bzero(conn->eld, totalLen);

	/* Header */
	conn->eld[0] = 0x02 << 3; /* ELD version 2 */
	conn->eld[2] = baselineLen / 4;

	/* Baseline */
	conn->eld[4] = (conn->numSADs << 4) | mnl;

	/* Connection type: check if DP or HDMI from EDID vendor block */
	/* For now, set based on pin cap (DP=1, HDMI=0) */
	conn->eld[5] = 0x00; /* HDMI (will be overridden if DP detected) */

	conn->eld[6] = 0; /* audio sync delay */
	conn->eld[7] = conn->speakerAllocation;

	/* Copy SADs starting at offset 8 */
	for (int i = 0; i < conn->numSADs * 3; i++)
		conn->eld[8 + i] = conn->sads[i];

	FBLOG("buildELD: pin=%d eldLen=%d spkalloc=0x%02x nsads=%d",
	      conn->mappedPinNid, totalLen, conn->speakerAllocation, conn->numSADs);
}

/* ---------- audio pipe control ---------- */

bool VoodooHDAFramebufferNotifier::enableAudioPipe(FBConnectionState *conn)
{
	if (!conn->framebuffer || conn->audioPipeEnabled) return true;

	IOReturn ret = conn->framebuffer->setAttributeForConnectionExt(
		0, kConnectionEnableAudio, 1);

	FBLOG("enableAudioPipe: pin=%d fb=%p ret=0x%x",
	      conn->mappedPinNid, conn->framebuffer, ret);

	if (ret == kIOReturnSuccess || ret == kIOReturnUnsupported) {
		/* kIOReturnUnsupported may mean it's already enabled or not needed */
		conn->audioPipeEnabled = true;

		/* Also tell GPU we're streaming */
		conn->framebuffer->setAttributeForConnectionExt(
			0, kConnectionAudioStreaming, 1);
		return true;
	}

	FBLOG("enableAudioPipe: FAILED pin=%d ret=0x%x", conn->mappedPinNid, ret);
	return false;
}

void VoodooHDAFramebufferNotifier::disableAudioPipe(FBConnectionState *conn)
{
	if (!conn->framebuffer || !conn->audioPipeEnabled) return;

	conn->framebuffer->setAttributeForConnectionExt(0, kConnectionAudioStreaming, 0);
	conn->framebuffer->setAttributeForConnectionExt(0, kConnectionEnableAudio, 0);
	conn->audioPipeEnabled = false;
	FBLOG("disableAudioPipe: pin=%d", conn->mappedPinNid);
}

/* ---------- ELD injection into VoodooHDA widget ---------- */

void VoodooHDAFramebufferNotifier::injectELDIntoWidget(FBConnectionState *conn)
{
	if (!mDevice || conn->mappedPinNid < 0 || !conn->eld || conn->eldLen == 0)
		return;

	/*
	 * Find the widget and set its ELD.
	 * We need to iterate codecs/funcgroups to find the right widget.
	 */
	Codec *codec = mDevice->mCodecs[conn->mappedCodecCad];
	if (!codec) return;

	for (int fg = 0; fg < codec->numFuncGroups; fg++) {
		FunctionGroup *funcGroup = &codec->funcGroups[fg];
		if (funcGroup->nodeType != HDA_PARAM_FCT_GRP_TYPE_NODE_TYPE_AUDIO)
			continue;
		Widget *w = mDevice->widgetGet(funcGroup, conn->mappedPinNid);
		if (!w) continue;

		/* Free old ELD on widget */
		if (w->eld) {
			VoodooHDADevice::freeMem(w->eld);
			w->eld = NULL;
			w->eld_len = 0;
		}

		/* Copy our ELD to widget */
		w->eld = (uint8_t *)VoodooHDADevice::allocMem(conn->eldLen);
		if (w->eld) {
			memcpy(w->eld, conn->eld, conn->eldLen);
			w->eld_len = conn->eldLen;
			FBLOG("injectELD: nid=%d eld_len=%d spkalloc=0x%02x",
			      conn->mappedPinNid, w->eld_len,
			      (w->eld_len > 7) ? w->eld[7] : 0);
		}
		return;
	}

	FBLOG("injectELD: widget nid=%d not found in codec cad=%d",
	      conn->mappedPinNid, conn->mappedCodecCad);
}

void VoodooHDAFramebufferNotifier::clearWidgetELD(FBConnectionState *conn)
{
	if (!mDevice || conn->mappedPinNid < 0) return;

	Codec *codec = mDevice->mCodecs[conn->mappedCodecCad];
	if (!codec) return;

	for (int fg = 0; fg < codec->numFuncGroups; fg++) {
		FunctionGroup *funcGroup = &codec->funcGroups[fg];
		if (funcGroup->nodeType != HDA_PARAM_FCT_GRP_TYPE_NODE_TYPE_AUDIO) continue;
		Widget *w = mDevice->widgetGet(funcGroup, conn->mappedPinNid);
		if (!w) continue;
		if (w->eld) {
			VoodooHDADevice::freeMem(w->eld);
			w->eld = NULL;
			w->eld_len = 0;
		}
		FBLOG("clearWidgetELD: nid=%d", conn->mappedPinNid);
		return;
	}
}

/* ---------- public query interface ---------- */

bool VoodooHDAFramebufferNotifier::getFramebufferELD(
	int cad, nid_t pinNid, uint8_t **outELD, int *outLen)
{
	IOLockLock(mLock);
	for (int i = 0; i < mNumConnections; i++) {
		FBConnectionState *conn = &mConnections[i];
		if (conn->mappedCodecCad == cad && conn->mappedPinNid == pinNid &&
		    conn->eld && conn->eldLen > 0) {
			*outELD = conn->eld;
			*outLen = conn->eldLen;
			IOLockUnlock(mLock);
			return true;
		}
	}
	IOLockUnlock(mLock);
	return false;
}

void VoodooHDAFramebufferNotifier::ensureAudioPipeEnabled(int cad, nid_t pinNid)
{
	IOLockLock(mLock);
	for (int i = 0; i < mNumConnections; i++) {
		FBConnectionState *conn = &mConnections[i];
		if (conn->mappedCodecCad == cad && conn->mappedPinNid == pinNid) {
			if (!conn->audioPipeEnabled && conn->edidValid) {
				enableAudioPipe(conn);
			}
			/* If no ELD yet, try reading EDID now */
			if (!conn->edidValid && conn->framebuffer) {
				if (readEDID(conn) && parseEDIDAudio(conn)) {
					buildELDFromEDID(conn);
					conn->edidValid = true;
					enableAudioPipe(conn);
					injectELDIntoWidget(conn);
				}
			}
			break;
		}
	}
	IOLockUnlock(mLock);
}

FBConnectionState *
VoodooHDAFramebufferNotifier::findConnectionForPin(int cad, nid_t pinNid)
{
	for (int i = 0; i < mNumConnections; i++) {
		if (mConnections[i].mappedCodecCad == cad &&
		    mConnections[i].mappedPinNid == pinNid)
			return &mConnections[i];
	}
	return NULL;
}

FBConnectionState *
VoodooHDAFramebufferNotifier::findConnection(IOFramebuffer *fb)
{
	for (int i = 0; i < mNumConnections; i++) {
		if (mConnections[i].framebuffer == fb)
			return &mConnections[i];
	}
	return NULL;
}
