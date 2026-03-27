#include "License.h"

#ifndef _VOODOO_HDA_FB_NOTIFIER_H
#define _VOODOO_HDA_FB_NOTIFIER_H

#include <IOKit/IOLib.h>
#include <IOKit/IOService.h>
#include <IOKit/IONotifier.h>
#include <IOKit/IOLocks.h>
#include <IOKit/pci/IOPCIDevice.h>
#include <IOKit/graphics/IOFramebuffer.h>
#include <IOKit/graphics/IOGraphicsTypes.h>

#include "Private.h"

#define VHDA_FB_MAX_CONNECTIONS 6
#define VHDA_FB_MAX_PINS       16
#define VHDA_FB_MAX_SADS       15

class VoodooHDADevice;

/* Per-framebuffer connection tracking */
struct FBConnectionState {
	IOFramebuffer *framebuffer;
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

	/* IOFramebuffer notification callback */
	static IOReturn framebufferEventHandler(OSObject *obj, void *ref,
	                                         IOFramebuffer *framebuffer,
	                                         IOIndex event, void *info);

	/* Internal helpers */
	void handleFramebufferMatched(IOFramebuffer *fb);
	void handleFramebufferTerminated(IOFramebuffer *fb);
	void handleEvent(FBConnectionState *conn, IOIndex event, void *info);

	bool isSameGPU(IOService *fbService);
	bool readEDID(FBConnectionState *conn);
	bool parseEDIDAudio(FBConnectionState *conn);
	void buildELDFromEDID(FBConnectionState *conn);
	bool enableAudioPipe(FBConnectionState *conn);
	void disableAudioPipe(FBConnectionState *conn);
	void injectELDIntoWidget(FBConnectionState *conn);
	void clearWidgetELD(FBConnectionState *conn);

	FBConnectionState *findConnection(IOFramebuffer *fb);
	FBConnectionState *findConnectionForPin(int cad, nid_t pinNid);
	void mapConnectionToPin(FBConnectionState *conn, int connIndex);
};

#endif
