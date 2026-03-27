#include "License.h"

#include "VoodooHDAFramebufferNotifier.h"
#include "VoodooHDADevice.h"
#include "Verbs.h"

#include <IOKit/pci/IOPCIDevice.h>

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
	mDisplayMatchNotifier = NULL;
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
	/*
	 * Match IOFramebuffer services from AMD GPUs.
	 * We use string-based serviceMatching("IOFramebuffer") which does NOT
	 * require linking against IOGraphicsFamily — only IOKit core.
	 */
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

	matchDict = IOService::serviceMatching("IOFramebuffer");
	if (matchDict) {
		mGFXTermNotifier = IOService::addMatchingNotification(
			gIOTerminatedNotification, matchDict,
			&VoodooHDAFramebufferNotifier::gfxTerminatedHandler,
			this, NULL, 0);
	}

	/*
	 * IODisplay is created AFTER IOFramebuffer and carries the IODisplayEDID
	 * property.  Listen for it separately so we can read EDID when it appears.
	 */
	matchDict = IOService::serviceMatching("IODisplay");
	if (matchDict) {
		mDisplayMatchNotifier = IOService::addMatchingNotification(
			gIOMatchedNotification, matchDict,
			&VoodooHDAFramebufferNotifier::displayMatchedHandler,
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
	if (mDisplayMatchNotifier) {
		mDisplayMatchNotifier->remove();
		mDisplayMatchNotifier = NULL;
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
	if (fbVendor != 0x1002) return false;

	/*
	 * GPU display is PCI function 0, HDA audio is function 1.
	 * They share the same parent PCI bridge.
	 */
	IOService *hdaParent = mHDAPciDevice->getProvider();
	IOService *fbParent = fbPCI->getProvider();

	bool same = (hdaParent && fbParent && hdaParent == fbParent);
	FBLOG("isSameGPU: fbPCI=%p vendor=0x%04x hdaParent=%p fbParent=%p -> %s",
	      fbPCI, fbVendor, hdaParent, fbParent, same ? "YES" : "NO");
	return same;
}

/* ---------- matching callbacks ---------- */

bool VoodooHDAFramebufferNotifier::gfxMatchedHandler(
	void *target, void *refCon, IOService *newService, IONotifier *notifier)
{
	VoodooHDAFramebufferNotifier *self = (VoodooHDAFramebufferNotifier *)target;
	if (!newService) return true;

	FBLOG("gfxMatchedHandler: service=%p class=%s",
	      newService, newService->getMetaClass()->getClassName());

	if (!self->isSameGPU(newService)) return true;

	self->handleFramebufferMatched(newService);
	return true;
}

bool VoodooHDAFramebufferNotifier::gfxTerminatedHandler(
	void *target, void *refCon, IOService *service, IONotifier *notifier)
{
	VoodooHDAFramebufferNotifier *self = (VoodooHDAFramebufferNotifier *)target;
	if (service) self->handleFramebufferTerminated(service);
	return true;
}

bool VoodooHDAFramebufferNotifier::displayMatchedHandler(
	void *target, void *refCon, IOService *newService, IONotifier *notifier)
{
	VoodooHDAFramebufferNotifier *self = (VoodooHDAFramebufferNotifier *)target;
	if (!newService) return true;

	OSData *edidProp = OSDynamicCast(OSData, newService->getProperty(kIODisplayEDIDKey));
	if (!edidProp || edidProp->getLength() < 128) return true;

	/*
	 * Walk up: IODisplay -> IODisplayConnect -> IOFramebuffer
	 * Match the IOFramebuffer to one of our registered connections.
	 */
	IOService *parent = newService->getProvider();           /* IODisplayConnect */
	IOService *fb = parent ? parent->getProvider() : NULL;   /* IOFramebuffer   */
	if (!fb) return true;

	IOLockLock(self->mLock);
	FBConnectionState *conn = self->findConnection(fb);
	if (conn && !conn->edidValid) {
		FBLOG("displayMatched: IODisplay for pin=%d, reading EDID", conn->mappedPinNid);

		if (conn->edidData) {
			IOFree(conn->edidData, conn->edidLen);
			conn->edidData = NULL;
		}
		conn->edidLen = edidProp->getLength();
		conn->edidData = (uint8_t *)IOMalloc(conn->edidLen);
		if (conn->edidData) {
			memcpy(conn->edidData, edidProp->getBytesNoCopy(), conn->edidLen);
			FBLOG("displayMatched: pin=%d got %d bytes EDID", conn->mappedPinNid, conn->edidLen);

			if (self->parseEDIDAudio(conn)) {
				self->buildELDFromEDID(conn);
				conn->edidValid = true;
				conn->displayOnline = true;
				self->enableAudioPipe(conn);
				self->injectELDIntoWidget(conn);
				FBLOG("displayMatched: pin=%d spkalloc=0x%02x nsads=%d pipe enabled",
				      conn->mappedPinNid, conn->speakerAllocation, conn->numSADs);
			}
		}
	}
	IOLockUnlock(self->mLock);
	return true;
}

/* ---------- framebuffer attach/detach ---------- */

void VoodooHDAFramebufferNotifier::handleFramebufferMatched(IOService *fb)
{
	IOLockLock(mLock);

	if (mNumConnections >= VHDA_FB_MAX_CONNECTIONS) {
		FBLOG("handleFBMatched: max connections reached");
		IOLockUnlock(mLock);
		return;
	}

	for (int i = 0; i < mNumConnections; i++) {
		if (mConnections[i].framebuffer == fb) {
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

	mapConnectionToPin(conn, idx);

	/*
	 * We do NOT call addFramebufferNotification() here because it requires
	 * linking against IOGraphicsFamily, which may not be available on all
	 * macOS versions. Instead, we read EDID on-demand at stream start.
	 *
	 * IOInterestNotification (general interest) is used for lifecycle events.
	 */
	conn->fbNotifier = fb->registerInterest(gIOGeneralInterest,
		&VoodooHDAFramebufferNotifier::interestHandler, this, conn);

	FBLOG("handleFBMatched: fb=%p slot=%d notifier=%p pin=%d",
	      fb, idx, conn->fbNotifier, conn->mappedPinNid);

	/* Try reading EDID immediately */
	if (readEDID(conn) && parseEDIDAudio(conn)) {
		buildELDFromEDID(conn);
		conn->edidValid = true;
		conn->displayOnline = true;
		FBLOG("handleFBMatched: EDID valid, spkalloc=0x%02x nsads=%d",
		      conn->speakerAllocation, conn->numSADs);
		enableAudioPipe(conn);
		injectELDIntoWidget(conn);
	}

	IOLockUnlock(mLock);
}

void VoodooHDAFramebufferNotifier::handleFramebufferTerminated(IOService *fb)
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

		for (int j = i; j < mNumConnections - 1; j++)
			mConnections[j] = mConnections[j + 1];
		mNumConnections--;
		break;
	}
	IOLockUnlock(mLock);
}

/* ---------- IOService interest handler (replaces IOFramebuffer notification) ---------- */

IOReturn VoodooHDAFramebufferNotifier::interestHandler(
	void *target, void *refCon, UInt32 messageType, IOService *provider,
	void *messageArgument, vm_size_t argSize)
{
	VoodooHDAFramebufferNotifier *self = (VoodooHDAFramebufferNotifier *)target;
	FBConnectionState *conn = (FBConnectionState *)refCon;
	if (!self || !conn) return kIOReturnSuccess;

	/*
	 * kIOMessageServicePropertyChange fires when IOFramebuffer properties change
	 * (including IODisplayEDID). This is our trigger to re-read EDID.
	 */
	if (messageType == kIOMessageServicePropertyChange) {
		FBLOG("interestHandler: PropertyChange fb=%p pin=%d", provider, conn->mappedPinNid);
		IOLockLock(self->mLock);
		if (self->readEDID(conn) && self->parseEDIDAudio(conn)) {
			self->buildELDFromEDID(conn);
			conn->edidValid = true;
			conn->displayOnline = true;
			self->enableAudioPipe(conn);
			self->injectELDIntoWidget(conn);
			FBLOG("interestHandler: EDID updated, spkalloc=0x%02x nsads=%d",
			      conn->speakerAllocation, conn->numSADs);
		}
		IOLockUnlock(self->mLock);
	} else if (messageType == kIOMessageServiceIsTerminated) {
		FBLOG("interestHandler: service terminated fb=%p pin=%d", provider, conn->mappedPinNid);
	}

	return kIOReturnSuccess;
}

/* ---------- pin mapping ---------- */

void VoodooHDAFramebufferNotifier::mapConnectionToPin(FBConnectionState *conn, int connIndex)
{
	if (mATIPinCount > 0 && connIndex < mATIPinCount) {
		conn->mappedPinNid = mATIPinNids[connIndex];
		conn->mappedCodecCad = mATIPinCad;
		FBLOG("mapConnectionToPin: connIndex=%d -> pin nid=%d cad=%d",
		      connIndex, conn->mappedPinNid, conn->mappedCodecCad);
	}
}

/* ---------- EDID reading ---------- */

bool VoodooHDAFramebufferNotifier::readEDID(FBConnectionState *conn)
{
	if (!conn->framebuffer) return false;

	if (conn->edidData) {
		IOFree(conn->edidData, conn->edidLen);
		conn->edidData = NULL;
		conn->edidLen = 0;
	}

	/*
	 * IODisplayEDID lives on the IODisplay child, not on the IOFramebuffer itself.
	 * IOKit tree: IOFramebuffer -> IODisplayConnect -> IODisplay (has IODisplayEDID).
	 * Search up to 2 levels deep without requiring IOGraphicsFamily headers.
	 */
	OSData *edidProp = OSDynamicCast(OSData, conn->framebuffer->getProperty(kIODisplayEDIDKey));

	if (!edidProp) {
		OSIterator *iter = conn->framebuffer->getChildIterator(gIOServicePlane);
		if (iter) {
			IOService *child;
			while (!edidProp && (child = OSDynamicCast(IOService, iter->getNextObject()))) {
				edidProp = OSDynamicCast(OSData, child->getProperty(kIODisplayEDIDKey));
				if (!edidProp) {
					/* IODisplayConnect -> IODisplay */
					OSIterator *iter2 = child->getChildIterator(gIOServicePlane);
					if (iter2) {
						IOService *grandChild;
						while (!edidProp && (grandChild = OSDynamicCast(IOService, iter2->getNextObject())))
							edidProp = OSDynamicCast(OSData, grandChild->getProperty(kIODisplayEDIDKey));
						iter2->release();
					}
				}
			}
			iter->release();
		}
	}

	if (edidProp && edidProp->getLength() >= 128) {
		conn->edidLen = edidProp->getLength();
		conn->edidData = (uint8_t *)IOMalloc(conn->edidLen);
		if (conn->edidData) {
			memcpy(conn->edidData, edidProp->getBytesNoCopy(), conn->edidLen);
			FBLOG("readEDID: pin=%d got %d bytes", conn->mappedPinNid, conn->edidLen);
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

	int numExtensions = conn->edidData[126];
	if (numExtensions == 0 || conn->edidLen < 256) {
		/* No CEA block — default to stereo LPCM */
		conn->speakerAllocation = 0x01;
		conn->sads[0] = 0x09; /* LPCM, 2ch */
		conn->sads[1] = 0x07; /* 32/44.1/48 kHz */
		conn->sads[2] = 0x01; /* 16-bit */
		conn->numSADs = 1;
		FBLOG("parseEDIDAudio: pin=%d no CEA extension, using default stereo LPCM", conn->mappedPinNid);
		return true;
	}

	uint8_t *cea = &conn->edidData[128];
	if (cea[0] != 0x02) {
		FBLOG("parseEDIDAudio: pin=%d CEA tag=0x%02x (expected 0x02)", conn->mappedPinNid, cea[0]);
		return false;
	}

	int dtdOffset = cea[2];
	bool basicAudio = (cea[3] & 0x40) != 0;
	FBLOG("parseEDIDAudio: pin=%d CEA rev=%d dtdOffset=%d basicAudio=%d",
	      conn->mappedPinNid, cea[1], dtdOffset, basicAudio);

	if (!basicAudio) {
		FBLOG("parseEDIDAudio: pin=%d no basic audio support", conn->mappedPinNid);
		return false;
	}

	int pos = 4;
	while (pos < dtdOffset && pos < 127) {
		int tag = (cea[pos] >> 5) & 0x07;
		int blockLen = cea[pos] & 0x1f;
		pos++;
		if (pos + blockLen > dtdOffset) break;

		if (tag == 1) {
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
			if (blockLen >= 1) {
				conn->speakerAllocation = cea[pos];
				FBLOG("parseEDIDAudio: pin=%d Speaker Allocation: 0x%02x", conn->mappedPinNid, cea[pos]);
			}
		}
		pos += blockLen;
	}

	if (conn->numSADs > 0 && conn->speakerAllocation == 0)
		conn->speakerAllocation = 0x01;

	FBLOG("parseEDIDAudio: pin=%d result: spkalloc=0x%02x nsads=%d",
	      conn->mappedPinNid, conn->speakerAllocation, conn->numSADs);
	return (conn->numSADs > 0);
}

/* ---------- ELD construction ---------- */

void VoodooHDAFramebufferNotifier::buildELDFromEDID(FBConnectionState *conn)
{
	if (conn->eld) {
		IOFree(conn->eld, conn->eldLen);
		conn->eld = NULL;
		conn->eldLen = 0;
	}

	int mnl = 0;
	int baselineLen = 4 + mnl + conn->numSADs * 3;
	int totalLen = 4 + baselineLen;

	conn->eld = (uint8_t *)IOMalloc(totalLen);
	if (!conn->eld) return;
	conn->eldLen = totalLen;
	bzero(conn->eld, totalLen);

	conn->eld[0] = 0x02 << 3; /* ELD version 2 */
	conn->eld[2] = baselineLen / 4;
	conn->eld[4] = (conn->numSADs << 4) | mnl;
	conn->eld[5] = 0x00; /* HDMI */
	conn->eld[6] = 0;    /* audio sync delay */
	conn->eld[7] = conn->speakerAllocation;

	for (int i = 0; i < conn->numSADs * 3; i++)
		conn->eld[8 + i] = conn->sads[i];

	FBLOG("buildELD: pin=%d eldLen=%d spkalloc=0x%02x nsads=%d",
	      conn->mappedPinNid, totalLen, conn->speakerAllocation, conn->numSADs);
}

/* ---------- audio pipe control ---------- */

bool VoodooHDAFramebufferNotifier::enableAudioPipe(FBConnectionState *conn)
{
	if (!conn->framebuffer) return false;

	/*
	 * Activate the GPU audio pipe via IOFramebuffer::setAttributeForConnection().
	 * This is a virtual method — the call dispatches through the vtable at runtime
	 * and does NOT require linking against IOGraphicsFamily.  The header is only
	 * needed for the vtable layout (compile-time constant).
	 *
	 * Safety: we verified the object is an AMDFramebuffer (IOFramebuffer subclass)
	 * in isSameGPU() before creating the connection.
	 */
	IOFramebuffer *fb = reinterpret_cast<IOFramebuffer *>(conn->framebuffer);

	/* Enable audio on this connection — mirrors what AppleGFXHDA does */
	IOReturn ret = fb->setAttributeForConnection(0, kConnectionEnableAudio, 1);
	FBLOG("enableAudioPipe: pin=%d setAttributeForConnection(kConnectionEnableAudio)=%x", conn->mappedPinNid, ret);

	if (ret == kIOReturnSuccess) {
		ret = fb->setAttributeForConnection(0, kConnectionAudioStreaming, 1);
		FBLOG("enableAudioPipe: pin=%d setAttributeForConnection(kConnectionAudioStreaming)=%x", conn->mappedPinNid, ret);
	}

	conn->audioPipeEnabled = (ret == kIOReturnSuccess);
	return conn->audioPipeEnabled;
}

void VoodooHDAFramebufferNotifier::disableAudioPipe(FBConnectionState *conn)
{
	conn->audioPipeEnabled = false;
}

/* ---------- ELD injection into VoodooHDA widget ---------- */

void VoodooHDAFramebufferNotifier::injectELDIntoWidget(FBConnectionState *conn)
{
	if (!mDevice || conn->mappedPinNid < 0 || !conn->eld || conn->eldLen == 0)
		return;

	Codec *codec = mDevice->mCodecs[conn->mappedCodecCad];
	if (!codec) return;

	for (int fg = 0; fg < codec->numFuncGroups; fg++) {
		FunctionGroup *funcGroup = &codec->funcGroups[fg];
		if (funcGroup->nodeType != HDA_PARAM_FCT_GRP_TYPE_NODE_TYPE_AUDIO)
			continue;
		Widget *w = mDevice->widgetGet(funcGroup, conn->mappedPinNid);
		if (!w) continue;

		if (w->eld) {
			VoodooHDADevice::freeMem(w->eld);
			w->eld = NULL;
			w->eld_len = 0;
		}

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
VoodooHDAFramebufferNotifier::findConnection(IOService *fb)
{
	for (int i = 0; i < mNumConnections; i++) {
		if (mConnections[i].framebuffer == fb)
			return &mConnections[i];
	}
	return NULL;
}
