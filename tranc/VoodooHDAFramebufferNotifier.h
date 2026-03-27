#include "License.h"

#ifndef _VOODOO_HDA_FB_NOTIFIER_H
#define _VOODOO_HDA_FB_NOTIFIER_H

#include <IOKit/IOLib.h>
#include <IOKit/IOService.h>
#include <IOKit/IONotifier.h>
#include <IOKit/IOLocks.h>
#include <IOKit/pci/IOPCIDevice.h>
/*
 * IOFramebuffer integration uses runtime symbol resolution
 * to avoid hard dependency on IOGraphicsFamily.
 * Only the EDID property and IOService matching are used directly.
 */
#define kIODisplayEDIDKey "IODisplayEDID"
#define kConnectionEnableAudio 0x61756420  /* 'aud ' */
#define kConnectionAudioStreaming 0x61756473 /* 'auds' */

#include "Private.h"

#define VHDA_FB_MAX_CONNECTIONS 6
#define VHDA_FB_MAX_PINS       16
#define VHDA_FB_MAX_SADS       15

class VoodooHDADevice;

/* Per-framebuffer connection tracking */
struct FBConnectionState {
	IOService *framebuffer;
	IONotifier    *fbNotifier;
	bool           displayOnline;
	bool           edidValid;
	bool           audioPipeEnabled;
	nid_t          mappedPinNid;
	int            mappedCodecCad;
	uint8_t       *edidData;
	int            edidLen;
	/* Parsed from EDID CEA extension */
	uint8_t        speakerAllocation;
	uint8_t        sads[VHDA_FB_MAX_SADS * 3];
	int            numSADs;
	/* Constructed ELD */
	uint8_t       *eld;
	int            eldLen;
};

class VoodooHDAFramebufferNotifier : public OSObject {
	OSDeclareDefaultStructors(VoodooHDAFramebufferNotifier)
public:
	static VoodooHDAFramebufferNotifier *withDevice(VoodooHDADevice *device);
	virtual void free() APPLE_KEXT_OVERRIDE;

	void startMatching();
	void stopMatching();

	/* Called by VoodooHDADevice when ATI codec pins are known */
	void registerATIPins(int cad, nid_t *pinNids, int count);

	/* Query framebuffer ELD for a given pin */
	bool getFramebufferELD(int cad, nid_t pinNid, uint8_t **outELD, int *outLen);

	/* Ensure audio pipe is active for a pin (called at stream start) */
	void ensureAudioPipeEnabled(int cad, nid_t pinNid);

private:
	bool init(VoodooHDADevice *device);

	VoodooHDADevice        *mDevice;
	IONotifier             *mGFXMatchNotifier;
	IONotifier             *mGFXTermNotifier;
	FBConnectionState       mConnections[VHDA_FB_MAX_CONNECTIONS];
	int                     mNumConnections;
	IOLock                 *mLock;

	/* ATI pin NIDs to map */
	nid_t                   mATIPinNids[VHDA_FB_MAX_PINS];
	int                     mATIPinCad;
	int                     mATIPinCount;

	/* IOPCIDevice of the HDA controller — for PCI topology matching */
	IOPCIDevice            *mHDAPciDevice;

	/* IOService matching callbacks */
	static bool gfxMatchedHandler(void *target, void *refCon,
	                               IOService *newService, IONotifier *notifier);
	static bool gfxTerminatedHandler(void *target, void *refCon,
	                                  IOService *service, IONotifier *notifier);

	/* IOService interest notification (no IOGraphicsFamily dependency) */
	static IOReturn interestHandler(void *target, void *refCon,
	                                 UInt32 messageType, IOService *provider,
	                                 void *messageArgument, vm_size_t argSize);

	/* Internal helpers */
	void handleFramebufferMatched(IOService *fb);
	void handleFramebufferTerminated(IOService *fb);

	bool isSameGPU(IOService *fbService);
	bool readEDID(FBConnectionState *conn);
	bool parseEDIDAudio(FBConnectionState *conn);
	void buildELDFromEDID(FBConnectionState *conn);
	bool enableAudioPipe(FBConnectionState *conn);
	void disableAudioPipe(FBConnectionState *conn);
	void injectELDIntoWidget(FBConnectionState *conn);
	void clearWidgetELD(FBConnectionState *conn);

	FBConnectionState *findConnection(IOService *fb);
	FBConnectionState *findConnectionForPin(int cad, nid_t pinNid);
	void mapConnectionToPin(FBConnectionState *conn, int connIndex);
};

#endif
