#include "License.h"

#ifndef _VOODOO_GFX_HDA_H
#define _VOODOO_GFX_HDA_H

#include <IOKit/IOLib.h>

#include "Private.h"

class VoodooHDADevice;
class VoodooHDAEngine;

class VoodooGFXHDAController;

class VoodooGFXHDAStream
{
public:
	VoodooGFXHDAStream();

	bool init(VoodooGFXHDAController *controller, VoodooHDAEngine *engine, Channel *channel);
	bool hasActiveTimingPoll() const;
	void armTimingPoll();
	void disarmTimingPoll();
	void resetTimingState();
	bool pollTimingProgress();
	UInt32 getCurrentSampleFrame();

private:
	VoodooGFXHDAController *mController;
	VoodooHDAEngine *mEngine;
	Channel *mChannel;
	bool mTimingPollActive;
	bool mHasPosition;
	UInt32 mLastPosition;
};

class VoodooGFXHDAController
{
public:
	VoodooGFXHDAController();

	bool init(VoodooHDADevice *device);
	void registerStream(Channel *channel, VoodooGFXHDAStream *stream);
	void unregisterStream(Channel *channel, VoodooGFXHDAStream *stream);
	VoodooGFXHDAStream *lookupStream(Channel *channel);
	void updateTiming(Channel *channel, bool active, bool primeNow);
	UInt32 getLinkPosition(Channel *channel, bool *valid = NULL);
	void setupStream(Channel *channel, nid_t dac, AudioAssoc *assoc, int totalchn, int totalext);
	void scheduleTimingPoll();
	VoodooHDADevice *getDevice() const;

private:
	struct StreamSlot {
		Channel *channel;
		VoodooGFXHDAStream *stream;
	};

	VoodooHDADevice *mDevice;
	StreamSlot mStreams[16];
	int mNumStreams;
};

#endif
