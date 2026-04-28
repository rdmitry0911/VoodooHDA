/* Command line diagnostic control for VoodooHDA debug builds. */
#include <CoreFoundation/CoreFoundation.h>
#include <IOKit/IOKitLib.h>
#include <mach/mach.h>
#include <errno.h>
#include <fcntl.h>
#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <time.h>
#include <unistd.h>

#include "../tranc/Shared.h"

#ifndef kIOMainPortDefault
#define kIOMainPortDefault MACH_PORT_NULL
#endif

typedef struct {
	const char *name;
	UInt16 flag;
} FlagDef;

static const FlagDef kFlags[] = {
	{ "enable", kVoodooHDADiagEnable },
	{ "mix-tone", kVoodooHDADiagInjectMixTone },
	{ "direct-tone", kVoodooHDADiagInjectDirectTone },
	{ "freeze", kVoodooHDADiagFreezeBuffer },
	{ "skip-erase", kVoodooHDADiagSkipErase },
	{ "bypass-processing", kVoodooHDADiagBypassProcessing },
	{ "prime", kVoodooHDADiagPrimeBufferOnStart },
	{ "skip-fb-eld", kVoodooHDADiagSkipFramebufferELD },
	{ "force-any-eld", kVoodooHDADiagForceAnyFramebufferELD },
	{ "force-ati-eld", kVoodooHDADiagForceATIELD },
	{ "skip-audio-pipe", kVoodooHDADiagSkipAudioPipe },
	{ "dump-gpu", kVoodooHDADiagDumpGPUStateOnStream },
	{ "force-standard", kVoodooHDADiagForceStandardHDMIPath },
	{ "force-ati", kVoodooHDADiagForceATIVendorPath },
	{ "chord", kVoodooHDADiagInjectChord },
};

/* === ELD presets ====================================================
 * CEA-861 ELD blobs constructed inline. Each preset advertises a single
 * Short Audio Descriptor (SAD) and a speaker-allocation byte. Sample-rate
 * and bit-depth flags follow CEA-861-D. Sample rate flags (byte 1):
 *   bit0 32k / bit1 44.1k / bit2 48k / bit3 88.2k / bit4 96k / bit5 176.4k
 *   bit6 192k. Bit-depth flags (byte 2): bit0 16 / bit1 20 / bit2 24.
 * Speaker allocation: 0x01 = FL/FR; 0x4F = 7.1 (FL/FR + LFE + FC + RL/RR + RLC/RRC).
 */
typedef struct {
	const char *name;
	UInt8 spkalloc;
	UInt8 numSADs;
	UInt8 sads[15]; /* up to 5 SADs * 3 bytes each */
	const char *desc;
} EldPreset;

static const EldPreset kEldPresets[] = {
	{ "2ch_48k_16",   0x01, 1, { 0x09, 0x04, 0x01 }, "stereo LPCM 48kHz/16-bit" },
	{ "2ch_48k_24",   0x01, 1, { 0x09, 0x04, 0x07 }, "stereo LPCM 48kHz/16/20/24-bit" },
	{ "8ch_48k_24",   0x4F, 1, { 0x0F, 0x04, 0x07 }, "7.1 LPCM 48kHz/16/20/24-bit" },
	{ "8ch_96k_24",   0x4F, 1, { 0x0F, 0x14, 0x07 }, "7.1 LPCM 48/96kHz/16/20/24-bit" },
	{ "8ch_192k_24",  0x4F, 1, { 0x0F, 0x54, 0x07 }, "7.1 LPCM 48/96/192kHz/16/20/24-bit" },
};

static int buildEldFromPreset(const EldPreset *p, UInt8 *out, size_t outCap)
{
	int sadBytes = p->numSADs * 3;
	int baseline = 4 + sadBytes;
	int padded = (baseline + 3) & ~3;
	int total = 4 + padded;
	if ((size_t)total > outCap)
		return -1;
	memset(out, 0, total);
	out[0] = 0x10; /* ELD_Ver = 2 in bits 7:3 */
	out[2] = padded / 4;
	out[4] = (p->numSADs << 4); /* mnl = 0 */
	out[5] = 0x00; /* HDMI connection type */
	out[6] = 0;    /* audio sync delay */
	out[7] = p->spkalloc;
	memcpy(out + 8, p->sads, sadBytes);
	return total;
}

static const EldPreset *findEldPreset(const char *name)
{
	for (size_t i = 0; i < sizeof(kEldPresets) / sizeof(kEldPresets[0]); i++)
		if (strcasecmp(name, kEldPresets[i].name) == 0)
			return &kEldPresets[i];
	return NULL;
}

static void usage(const char *prog)
{
	fprintf(stderr,
	    "Usage:\n"
	    "  %s [--service=N|--service=all] <command> [args...]\n"
	    "Commands (telemetry):\n"
	    "  services\n"
	    "  list\n"
	    "  flags\n"
	    "  get <channel|all>\n"
	    "  report [channel|all]\n"
	    "  set <channel> <mask|flag[,flag...]>\n"
	    "  enable <channel> <flag[,flag...]>\n"
	    "  disable <channel> <flag[,flag...]>\n"
	    "  clear <channel>\n"
	    "  verbose <0-4>\n"
	    "Commands (diag mode — HDMI crackle root-cause):\n"
	    "  tap-on <channel>\n"
	    "  tap-off <channel>\n"
	    "  tap-reset\n"
	    "  dump-pcm <channel> <out.wav>\n"
	    "  snapshot <channel> [out.json]\n"
	    "  force-active <channel> <on|off>\n"
	    "  set-eld <channel> <preset>\n"
	    "  clear-override <channel|all>\n"
	    "  list-elds\n"
	    "  chord <channel> <on|off>\n"
	    "Options:\n"
	    "  --service=N      target VoodooHDADevice index N (default 0)\n"
	    "  --service=all    repeat read-only command for every service\n"
	    "                   (only valid with list/get/report)\n"
	    "Env:\n"
	    "  VHDA_SERVICE     same as --service\n",
	    prog);
}

static io_service_t openServiceByIndex(int index)
{
	io_iterator_t iter = IO_OBJECT_NULL;
	io_service_t service = IO_OBJECT_NULL;
	kern_return_t kr;
	int current = 0;

	kr = IOServiceGetMatchingServices(kIOMainPortDefault,
	    IOServiceMatching(kVoodooHDAClassName), &iter);
	if (kr != KERN_SUCCESS || iter == IO_OBJECT_NULL)
		return IO_OBJECT_NULL;

	while ((service = IOIteratorNext(iter)) != IO_OBJECT_NULL) {
		if (current == index)
			break;
		IOObjectRelease(service);
		service = IO_OBJECT_NULL;
		current++;
	}

	IOObjectRelease(iter);
	return service;
}

static int countServices(void)
{
	io_iterator_t iter = IO_OBJECT_NULL;
	io_service_t service;
	kern_return_t kr;
	int count = 0;

	kr = IOServiceGetMatchingServices(kIOMainPortDefault,
	    IOServiceMatching(kVoodooHDAClassName), &iter);
	if (kr != KERN_SUCCESS || iter == IO_OBJECT_NULL)
		return 0;

	while ((service = IOIteratorNext(iter)) != IO_OBJECT_NULL) {
		IOObjectRelease(service);
		count++;
	}
	IOObjectRelease(iter);
	return count;
}

static void getServicePath(int index, char *out, size_t outSize)
{
	io_service_t service = openServiceByIndex(index);
	io_string_t path;

	if (!service) {
		strncpy(out, "<missing>", outSize);
		out[outSize - 1] = '\0';
		return;
	}
	if (IORegistryEntryGetPath(service, kIOServicePlane, path) == KERN_SUCCESS) {
		strncpy(out, path, outSize);
		out[outSize - 1] = '\0';
	} else {
		strncpy(out, "<unknown>", outSize);
		out[outSize - 1] = '\0';
	}
	IOObjectRelease(service);
}

static int printServices(void)
{
	io_iterator_t iter = IO_OBJECT_NULL;
	io_service_t service;
	kern_return_t kr;
	int index = 0;

	kr = IOServiceGetMatchingServices(kIOMainPortDefault,
	    IOServiceMatching(kVoodooHDAClassName), &iter);
	if (kr != KERN_SUCCESS || iter == IO_OBJECT_NULL) {
		fprintf(stderr, "VoodooHDADevice not found\n");
		return 1;
	}

	while ((service = IOIteratorNext(iter)) != IO_OBJECT_NULL) {
		io_string_t path;
		if (IORegistryEntryGetPath(service, kIOServicePlane, path) == KERN_SUCCESS)
			printf("service=%d path=%s\n", index, path);
		else
			printf("service=%d path=<unknown>\n", index);
		IOObjectRelease(service);
		index++;
	}

	IOObjectRelease(iter);
	return index ? 0 : 1;
}

static kern_return_t openConnection(int serviceIndex, io_connect_t *connect)
{
	io_service_t service = openServiceByIndex(serviceIndex);
	kern_return_t kr;

	if (!service) {
		fprintf(stderr, "VoodooHDADevice not found at service=%d\n", serviceIndex);
		return KERN_FAILURE;
	}

	kr = IOServiceOpen(service, mach_task_self(), 0, connect);
	IOObjectRelease(service);
	if (kr != KERN_SUCCESS)
		fprintf(stderr, "IOServiceOpen(service=%d) failed: 0x%x\n", serviceIndex, kr);
	return kr;
}

static kern_return_t sendAction(io_connect_t connect, UInt32 action, void *out, size_t *outSize)
{
	return IOConnectCallStructMethod(connect, kVoodooHDAActionMethod,
	    &action, sizeof(action), out, outSize);
}

static ChannelInfo *copyChannels(io_connect_t connect, size_t *count)
{
	kern_return_t kr;
	mach_vm_address_t address = 0;
	mach_vm_size_t size = 0;
	ChannelInfo *channels = NULL;

	kr = IOConnectMapMemory64(connect, kVoodooHDAChannelNames, mach_task_self(),
	    &address, &size, kIOMapAnywhere | kIOMapReadOnly);
	if (kr != KERN_SUCCESS) {
		fprintf(stderr, "IOConnectMapMemory64(channel info) failed: 0x%x\n", kr);
		return NULL;
	}

	if (size >= sizeof(ChannelInfo)) {
		channels = (ChannelInfo *)calloc(1, (size_t)size);
		if (channels) {
			memcpy(channels, (const void *)address, (size_t)size);
			*count = (size_t)size / sizeof(ChannelInfo);
		}
	}
	IOConnectUnmapMemory64(connect, kVoodooHDAChannelNames, mach_task_self(), address);
	return channels;
}

static int parseChannel(const char *s, size_t count)
{
	char *end = NULL;
	long value = strtol(s, &end, 0);
	if (!s[0] || (end && *end) || value < 0 || (size_t)value >= count) {
		fprintf(stderr, "Invalid channel '%s' (expected 0..%zu)\n", s, count ? count - 1 : 0);
		return -1;
	}
	return (int)value;
}

static UInt16 parseFlags(const char *spec)
{
	UInt16 flags = 0;
	char *copy;
	char *token;
	char *end = NULL;
	unsigned long numeric;

	if (!spec)
		return 0;

	numeric = strtoul(spec, &end, 0);
	if (spec[0] && end && *end == '\0')
		return (UInt16)numeric;

	copy = strdup(spec);
	if (!copy)
		return 0;

	for (token = strtok(copy, ",+"); token; token = strtok(NULL, ",+")) {
		while (*token == ' ' || *token == '\t')
			token++;
		for (size_t i = 0; i < sizeof(kFlags) / sizeof(kFlags[0]); i++) {
			if (strcasecmp(token, kFlags[i].name) == 0) {
				flags |= kFlags[i].flag;
				goto next;
			}
		}
		fprintf(stderr, "Unknown flag '%s'\n", token);
next:
		;
	}

	free(copy);
	return flags;
}

static const char *digitalName(UInt8 digital)
{
	switch (digital) {
	case 1: return "spdif";
	case 2: return "hdmi";
	case 3: return "dp";
	default: return "analog";
	}
}

static void printFlagNames(UInt16 flags)
{
	bool first = true;
	for (size_t i = 0; i < sizeof(kFlags) / sizeof(kFlags[0]); i++) {
		if (!(flags & kFlags[i].flag))
			continue;
		printf("%s%s", first ? "" : ",", kFlags[i].name);
		first = false;
	}
	if (first)
		printf("none");
}

static void printChannels(ChannelInfo *channels, size_t count)
{
	for (size_t i = 0; i < count; i++) {
		printf("channel=%zu name=\"%s\" type=%s direction=%d flags=0x%04x debug=%u buildFlags=0x%02x\n",
		    i, channels[i].name, digitalName(channels[i].digital),
		    channels[i].direction, channels[i].diagnosticFlags,
		    channels[i].debugLevel, channels[i].buildFlags);
	}
}

static kern_return_t getTelemetry(io_connect_t connect, UInt8 channel, VoodooHDADiagTelemetry *telemetry)
{
	UInt32 action = (UInt32)kVoodooHDAActionGetDiagTelemetry | ((UInt32)channel << 8);
	size_t outSize = sizeof(*telemetry);
	bzero(telemetry, sizeof(*telemetry));
	return sendAction(connect, action, telemetry, &outSize);
}

static void printTelemetry(const VoodooHDADiagTelemetry *t)
{
	printf("channel=%u name=\"%s\" type=%s direction=%d debug=%u buildFlags=0x%02x\n",
	    t->channel, t->channelName, digitalName(t->digital), t->direction,
	    t->debugLevel, t->buildFlags);
	printf("  codec=0x%04x:0x%04x family=%u cad=%u pin=%u\n",
	    t->codecVendor, t->codecDevice, t->codecFamily, t->cad, t->pinNid);
	printf("  flags=0x%04x flagsText=", t->diagnosticFlags);
	printFlagNames(t->diagnosticFlags);
	printf("\n");
	printf("  stream running=%u active=%u streamId=%u off=0x%x speed=%u format=0x%x\n",
	    t->running, t->streamActive, t->streamId, t->streamOffset, t->speed, t->format);
	printf("  dma bufferSize=%u numBlocks=%u blockSize=%u slack=%u\n",
	    t->bufferSize, t->numBlocks, t->blockSize, t->slack);
	printf("  position valid=%u link=%u frame=%u frames=%u sampleSize=%u clipped=%u\n",
	    t->linkPositionValid, t->linkPosition, t->currentSampleFrame,
	    t->numSampleFrames, t->sampleSize, t->clippedPosition);
	printf("  counters clip=%u mixTone=%u directTone=%u erase=%u eraseSkip=%u primed=%u lastFirst=%u lastNum=%u\n",
	    t->diagnosticClipCalls, t->diagnosticMixToneFills,
	    t->diagnosticDirectToneFills, t->diagnosticEraseCalls,
	    t->diagnosticEraseSkips, t->diagnosticBufferPrimed,
	    t->diagnosticLastFirstFrame, t->diagnosticLastNumFrames);
}

static int setDiag(io_connect_t connect, UInt8 channel, UInt16 flags)
{
	UInt32 action = (UInt32)kVoodooHDAActionSetDiag |
	    ((UInt32)channel << 8) |
	    ((UInt32)(flags & 0xff) << 16) |
	    ((UInt32)(flags >> 8) << 24);
	size_t outSize = sizeof(UInt32);
	UInt32 out = 0;
	kern_return_t kr = sendAction(connect, action, &out, &outSize);
	if (kr != KERN_SUCCESS) {
		fprintf(stderr, "set diagnostic flags failed: 0x%x\n", kr);
		return 1;
	}
	return 0;
}

static int setVerbose(io_connect_t connect, UInt8 level)
{
	UInt32 action = (UInt32)kVoodooHDAActionSetDebug | ((UInt32)level << 24);
	size_t outSize = sizeof(UInt32);
	UInt32 out = 0;
	kern_return_t kr = sendAction(connect, action, &out, &outSize);
	if (kr != KERN_SUCCESS) {
		fprintf(stderr, "set verbose failed: 0x%x\n", kr);
		return 1;
	}
	return 0;
}

/* === Diag-mode helpers ============================================== */

static kern_return_t mapDiagRegion(io_connect_t connect, uint32_t type,
                                   IOOptionBits options,
                                   mach_vm_address_t *addr, mach_vm_size_t *size)
{
	*addr = 0;
	*size = 0;
	return IOConnectMapMemory64(connect, type, mach_task_self(), addr, size,
	                             kIOMapAnywhere | options);
}

static void unmapDiagRegion(io_connect_t connect, uint32_t type, mach_vm_address_t addr)
{
	if (addr)
		IOConnectUnmapMemory64(connect, type, mach_task_self(), addr);
}

static int writeWavFile(const char *path, const void *samples, uint32_t bytes,
                        uint32_t sampleRate, uint16_t channels, uint16_t bitsPerSample)
{
	FILE *f = fopen(path, "wb");
	if (!f) {
		fprintf(stderr, "open %s: %s\n", path, strerror(errno));
		return 1;
	}
	uint32_t byteRate = sampleRate * channels * (bitsPerSample / 8);
	uint16_t blockAlign = channels * (bitsPerSample / 8);
	uint32_t dataSize = bytes;
	uint32_t riffSize = 36 + dataSize;

	uint8_t hdr[44];
	memcpy(hdr + 0, "RIFF", 4);
	hdr[4] = riffSize & 0xff;
	hdr[5] = (riffSize >> 8) & 0xff;
	hdr[6] = (riffSize >> 16) & 0xff;
	hdr[7] = (riffSize >> 24) & 0xff;
	memcpy(hdr + 8, "WAVEfmt ", 8);
	hdr[16] = 16; hdr[17] = 0; hdr[18] = 0; hdr[19] = 0; /* fmt chunk size */
	hdr[20] = 1;  hdr[21] = 0;                           /* PCM */
	hdr[22] = channels & 0xff; hdr[23] = (channels >> 8) & 0xff;
	hdr[24] = sampleRate & 0xff;
	hdr[25] = (sampleRate >> 8) & 0xff;
	hdr[26] = (sampleRate >> 16) & 0xff;
	hdr[27] = (sampleRate >> 24) & 0xff;
	hdr[28] = byteRate & 0xff;
	hdr[29] = (byteRate >> 8) & 0xff;
	hdr[30] = (byteRate >> 16) & 0xff;
	hdr[31] = (byteRate >> 24) & 0xff;
	hdr[32] = blockAlign & 0xff; hdr[33] = (blockAlign >> 8) & 0xff;
	hdr[34] = bitsPerSample & 0xff; hdr[35] = (bitsPerSample >> 8) & 0xff;
	memcpy(hdr + 36, "data", 4);
	hdr[40] = dataSize & 0xff;
	hdr[41] = (dataSize >> 8) & 0xff;
	hdr[42] = (dataSize >> 16) & 0xff;
	hdr[43] = (dataSize >> 24) & 0xff;
	if (fwrite(hdr, 1, 44, f) != 44 ||
	    (bytes && fwrite(samples, 1, bytes, f) != bytes)) {
		fprintf(stderr, "write %s: %s\n", path, strerror(errno));
		fclose(f);
		return 1;
	}
	fclose(f);
	return 0;
}

static int cmdTapOn(io_connect_t connect, UInt8 channel)
{
	UInt32 action = (UInt32)kVoodooHDAActionDiagPCMTap |
	                ((UInt32)channel << 8) | ((UInt32)1 << 16);
	size_t outSize = sizeof(UInt32);
	UInt32 out = 0;
	kern_return_t kr = sendAction(connect, action, &out, &outSize);
	if (kr != KERN_SUCCESS) {
		fprintf(stderr, "tap-on failed: 0x%x\n", kr);
		return 1;
	}
	return 0;
}

static int cmdTapOff(io_connect_t connect, UInt8 channel)
{
	UInt32 action = (UInt32)kVoodooHDAActionDiagPCMTap | ((UInt32)channel << 8);
	size_t outSize = sizeof(UInt32);
	UInt32 out = 0;
	kern_return_t kr = sendAction(connect, action, &out, &outSize);
	if (kr != KERN_SUCCESS) {
		fprintf(stderr, "tap-off failed: 0x%x\n", kr);
		return 1;
	}
	return 0;
}

static int cmdTapReset(io_connect_t connect)
{
	UInt32 action = (UInt32)kVoodooHDAActionDiagPCMRingReset;
	size_t outSize = sizeof(UInt32);
	UInt32 out = 0;
	kern_return_t kr = sendAction(connect, action, &out, &outSize);
	if (kr != KERN_SUCCESS) {
		fprintf(stderr, "tap-reset failed: 0x%x\n", kr);
		return 1;
	}
	return 0;
}

static int cmdDumpPCM(io_connect_t connect, UInt8 channel, const char *path)
{
	mach_vm_address_t addr = 0;
	mach_vm_size_t size = 0;
	(void)channel;
	kern_return_t kr = mapDiagRegion(connect, kVoodooHDAMemoryDiagPCMRing, 0, &addr, &size);
	if (kr != KERN_SUCCESS || !addr || size < kVoodooHDADiagPCMRingHeaderSize) {
		fprintf(stderr, "map PCM ring failed: 0x%x size=%llu\n", kr, (unsigned long long)size);
		return 1;
	}

	const VHDAPCMRingHeader *hdr = (const VHDAPCMRingHeader *)(uintptr_t)addr;
	if (hdr->magic != kVoodooHDADiagPCMRingMagic) {
		fprintf(stderr, "PCM ring magic mismatch: got 0x%x\n", (unsigned)hdr->magic);
		unmapDiagRegion(connect, kVoodooHDAMemoryDiagPCMRing, addr);
		return 1;
	}

	uint64_t head = hdr->head;
	uint64_t tail = hdr->tail;
	uint32_t ring_size = hdr->ring_size;
	uint64_t used = head - tail;
	if (used > ring_size)
		used = ring_size;
	uint32_t bytes = (uint32_t)used;

	uint32_t sampleRate = hdr->sample_rate ? hdr->sample_rate : 48000;
	uint16_t channels16 = hdr->channels ? (uint16_t)hdr->channels : 2;
	uint16_t bps = hdr->bits_per_sample ? (uint16_t)hdr->bits_per_sample : 16;

	printf("dump-pcm: head=%llu tail=%llu used=%u dropped=%u rate=%u ch=%u bps=%u\n",
	    (unsigned long long)head, (unsigned long long)tail, bytes,
	    (unsigned)hdr->dropped_bytes, sampleRate, channels16, bps);

	if (bytes == 0) {
		fprintf(stderr, "no samples captured (engine not running while tap was on?)\n");
		unmapDiagRegion(connect, kVoodooHDAMemoryDiagPCMRing, addr);
		return 2;
	}

	const uint8_t *data = (const uint8_t *)(uintptr_t)addr + hdr->ring_offset;
	uint32_t pos = (uint32_t)(tail % ring_size);
	uint32_t first = ring_size - pos;
	if (first > bytes)
		first = bytes;
	uint8_t *linear = (uint8_t *)malloc(bytes);
	if (!linear) {
		fprintf(stderr, "malloc %u bytes failed\n", bytes);
		unmapDiagRegion(connect, kVoodooHDAMemoryDiagPCMRing, addr);
		return 1;
	}
	memcpy(linear, data + pos, first);
	if (bytes > first)
		memcpy(linear + first, data, bytes - first);

	int rc = writeWavFile(path, linear, bytes, sampleRate, channels16, bps);
	free(linear);
	unmapDiagRegion(connect, kVoodooHDAMemoryDiagPCMRing, addr);
	return rc;
}

static void hexDump(FILE *f, const uint8_t *bytes, uint32_t len)
{
	for (uint32_t i = 0; i < len; i++) {
		if (i) fputc(',', f);
		fprintf(f, "%u", (unsigned)bytes[i]);
	}
}

static int cmdSnapshot(io_connect_t connect, UInt8 channel, const char *path)
{
	UInt32 action = (UInt32)kVoodooHDAActionDiagSnapshot | ((UInt32)channel << 8);
	size_t outSize = sizeof(UInt32);
	UInt32 out = 0;
	kern_return_t kr = sendAction(connect, action, &out, &outSize);
	if (kr != KERN_SUCCESS) {
		fprintf(stderr, "snapshot trigger failed: 0x%x\n", kr);
		return 1;
	}

	mach_vm_address_t addr = 0;
	mach_vm_size_t size = 0;
	kr = mapDiagRegion(connect, kVoodooHDAMemoryDiagSnapshot, kIOMapReadOnly, &addr, &size);
	if (kr != KERN_SUCCESS || !addr || size < sizeof(VHDADiagSnapshot)) {
		fprintf(stderr, "map snapshot failed: 0x%x size=%llu\n",
		        kr, (unsigned long long)size);
		return 1;
	}

	const VHDADiagSnapshot *s = (const VHDADiagSnapshot *)(uintptr_t)addr;
	if (s->magic != kVoodooHDADiagSnapshotMagic) {
		fprintf(stderr, "snapshot magic mismatch: 0x%x\n", (unsigned)s->magic);
		unmapDiagRegion(connect, kVoodooHDAMemoryDiagSnapshot, addr);
		return 1;
	}

	FILE *f = path ? fopen(path, "w") : stdout;
	if (!f) {
		fprintf(stderr, "open %s: %s\n", path, strerror(errno));
		unmapDiagRegion(connect, kVoodooHDAMemoryDiagSnapshot, addr);
		return 1;
	}

	fprintf(f, "{\n");
	fprintf(f, "  \"version\": %u,\n", (unsigned)s->version);
	fprintf(f, "  \"timestamp_ns\": %llu,\n",
	        ((uint64_t)s->timestamp_ns_hi << 32) | s->timestamp_ns_lo);
	fprintf(f, "  \"channel\": %u, \"cad\": %u, \"pin_nid\": %u, \"conv_nid\": %u,\n",
	        s->channel, s->cad, s->pin_nid, s->conv_nid);
	fprintf(f, "  \"digital\": %u, \"stream_id\": %u, \"stream_offset\": \"0x%x\",\n",
	        s->digital, s->stream_id, s->stream_offset);
	fprintf(f, "  \"buf_size\": %u, \"num_blocks\": %u, \"block_size\": %u,\n",
	        s->buf_size, s->num_blocks, s->block_size);
	fprintf(f, "  \"sd\": { \"ctl\": \"0x%x\", \"sts\": \"0x%x\", \"lpib\": %u, \"dpib\": %u, "
	        "\"format\": \"0x%x\", \"fifow\": %u, \"fifod\": %u },\n",
	        s->sd_ctl, s->sd_sts, s->sd_lpib, s->sd_dpib,
	        s->sd_format, s->sd_fifow, s->sd_fifod);
	fprintf(f, "  \"global\": { \"gctl\": \"0x%x\", \"gcap\": \"0x%x\", \"intctl\": \"0x%x\", "
	        "\"intsts\": \"0x%x\", \"corbsts\": \"0x%x\", \"rirbsts\": \"0x%x\", \"statests\": \"0x%x\" },\n",
	        s->gctl, s->gcap, s->intctl, s->intsts,
	        s->corbsts, s->rirbsts, s->statests);
	fprintf(f, "  \"codec\": { \"vendor\": \"0x%04x\", \"device\": \"0x%04x\", "
	        "\"family\": %u, \"hda_pci_did\": \"0x%04x\" },\n",
	        s->codec_vendor, s->codec_device, s->codec_family, s->hda_pci_device_id);
	fprintf(f, "  \"converter\": { \"fmt\": \"0x%x\", \"dig_fmt1\": \"0x%x\", \"dig_fmt2\": \"0x%x\", "
	        "\"chan_count\": %u, \"stream_chan\": \"0x%x\", \"power_state\": \"0x%x\" },\n",
	        s->conv_stream_format, s->conv_dig_conv_fmt1, s->conv_dig_conv_fmt2,
	        s->conv_chan_count, s->conv_stream_chan, s->conv_power_state);
	fprintf(f, "  \"pin\": { \"widget_ctrl\": \"0x%x\", \"eapd_btl\": \"0x%x\", "
	        "\"power_state\": \"0x%x\", \"conn_select\": %u, \"sense\": \"0x%x\" },\n",
	        s->pin_widget_ctrl, s->pin_eapd_btl, s->pin_power_state,
	        s->pin_conn_select, s->pin_sense);
	fprintf(f, "  \"override\": { \"force_active\": %u, \"injected_eld_len\": %u },\n",
	        s->force_active, s->injected_eld_len);
	fprintf(f, "  \"fb\": { \"present\": %u, \"eld_valid\": %u, \"eld_len\": %u, \"dip_len\": %u },\n",
	        s->fb_present, s->fb_eld_valid, s->fb_eld_len, s->fb_dip_len);
	fprintf(f, "  \"bdl\": [");
	for (uint32_t i = 0; i < s->bdl_count && i < kVoodooHDADiagMaxBdlEntries; i++) {
		fprintf(f, "%s\n    { \"addr\": \"0x%llx\", \"len\": %u, \"ioc\": %u }",
		    i ? "," : "",
		    ((uint64_t)s->bdl[i].addr_hi << 32) | s->bdl[i].addr_lo,
		    s->bdl[i].length, s->bdl[i].ioc);
	}
	fprintf(f, "\n  ],\n");
	if (s->fb_eld_len > 0) {
		fprintf(f, "  \"eld_blob\": [");
		hexDump(f, s->eld_blob, s->fb_eld_len < kVoodooHDADiagMaxELDLen
		                       ? s->fb_eld_len : kVoodooHDADiagMaxELDLen);
		fprintf(f, "],\n");
	}
	if (s->injected_eld_len > 0) {
		fprintf(f, "  \"injected_eld\": [");
		hexDump(f, s->injected_eld, s->injected_eld_len);
		fprintf(f, "],\n");
	}
	fprintf(f, "  \"pci_command\": \"0x%x\"\n", s->pci_command);
	fprintf(f, "}\n");

	if (path)
		fclose(f);
	unmapDiagRegion(connect, kVoodooHDAMemoryDiagSnapshot, addr);
	return 0;
}

static int cmdForceActive(io_connect_t connect, UInt8 channel, bool enable)
{
	UInt32 action = (UInt32)kVoodooHDAActionDiagForceActive |
	                ((UInt32)channel << 8) |
	                ((UInt32)(enable ? 1 : 0) << 16);
	size_t outSize = sizeof(UInt32);
	UInt32 out = 0;
	kern_return_t kr = sendAction(connect, action, &out, &outSize);
	if (kr != KERN_SUCCESS) {
		fprintf(stderr, "force-active failed: 0x%x\n", kr);
		return 1;
	}
	return 0;
}

static int cmdSetEld(io_connect_t connect, UInt8 channel, const char *presetName)
{
	const EldPreset *p = findEldPreset(presetName);
	if (!p) {
		fprintf(stderr, "unknown ELD preset '%s' (try list-elds)\n", presetName);
		return 1;
	}
	uint8_t blob[kVoodooHDADiagMaxELDLen];
	int len = buildEldFromPreset(p, blob, sizeof(blob));
	if (len <= 0) {
		fprintf(stderr, "failed to build ELD\n");
		return 1;
	}

	mach_vm_address_t addr = 0;
	mach_vm_size_t size = 0;
	kern_return_t kr = mapDiagRegion(connect, kVoodooHDAMemoryDiagELD, 0, &addr, &size);
	if (kr != KERN_SUCCESS || !addr || size < (mach_vm_size_t)len) {
		fprintf(stderr, "map ELD scratch failed: 0x%x size=%llu\n",
		        kr, (unsigned long long)size);
		return 1;
	}
	memcpy((void *)(uintptr_t)addr, blob, len);
	unmapDiagRegion(connect, kVoodooHDAMemoryDiagELD, addr);

	UInt32 action = (UInt32)kVoodooHDAActionDiagSetELD |
	                ((UInt32)channel << 8) |
	                ((UInt32)(len & 0xff) << 16) |
	                ((UInt32)((len >> 8) & 0xff) << 24);
	size_t outSize = sizeof(UInt32);
	UInt32 out = 0;
	kr = sendAction(connect, action, &out, &outSize);
	if (kr != KERN_SUCCESS) {
		fprintf(stderr, "set-eld failed: 0x%x\n", kr);
		return 1;
	}
	printf("set-eld: ch=%u preset=%s len=%d (%s)\n", channel, p->name, len, p->desc);
	return 0;
}

static int cmdClearOverride(io_connect_t connect, UInt8 channel)
{
	UInt32 action = (UInt32)kVoodooHDAActionDiagClearOverride |
	                ((UInt32)channel << 8);
	size_t outSize = sizeof(UInt32);
	UInt32 out = 0;
	kern_return_t kr = sendAction(connect, action, &out, &outSize);
	if (kr != KERN_SUCCESS) {
		fprintf(stderr, "clear-override failed: 0x%x\n", kr);
		return 1;
	}
	return 0;
}

static int runForService(int serviceIndex, int argc, char **argv, const char *prog)
{
	io_connect_t connect = IO_OBJECT_NULL;
	ChannelInfo *channels = NULL;
	size_t count = 0;
	const char *cmd;
	int rc = 1;

	cmd = argv[0];

	if (openConnection(serviceIndex, &connect) != KERN_SUCCESS)
		return 1;

	channels = copyChannels(connect, &count);
	if (!channels || !count)
		goto done;

	if (strcmp(cmd, "list") == 0) {
		printChannels(channels, count);
		rc = 0;
		goto done;
	}

	if (strcmp(cmd, "verbose") == 0) {
		if (argc != 2) {
			usage(prog);
			goto done;
		}
		rc = setVerbose(connect, (UInt8)strtoul(argv[1], NULL, 0));
		goto done;
	}

	if (strcmp(cmd, "get") == 0 || strcmp(cmd, "report") == 0) {
		int first = 0;
		int last = (int)count - 1;
		if (argc >= 2 && strcmp(argv[1], "all") != 0) {
			first = parseChannel(argv[1], count);
			if (first < 0)
				goto done;
			last = first;
		}
		for (int ch = first; ch <= last; ch++) {
			VoodooHDADiagTelemetry t;
			kern_return_t kr = getTelemetry(connect, (UInt8)ch, &t);
			if (kr != KERN_SUCCESS) {
				fprintf(stderr, "get telemetry for channel %d (service=%d) failed: 0x%x\n",
				    ch, serviceIndex, kr);
				continue;
			}
			printTelemetry(&t);
		}
		rc = 0;
		goto done;
	}

	if (strcmp(cmd, "tap-on") == 0 || strcmp(cmd, "tap-off") == 0) {
		if (argc != 2) { usage(prog); goto done; }
		int ch = parseChannel(argv[1], count);
		if (ch < 0) goto done;
		rc = (strcmp(cmd, "tap-on") == 0)
		     ? cmdTapOn(connect, (UInt8)ch)
		     : cmdTapOff(connect, (UInt8)ch);
		goto done;
	}

	if (strcmp(cmd, "tap-reset") == 0) {
		rc = cmdTapReset(connect);
		goto done;
	}

	if (strcmp(cmd, "dump-pcm") == 0) {
		if (argc != 3) { usage(prog); goto done; }
		int ch = parseChannel(argv[1], count);
		if (ch < 0) goto done;
		rc = cmdDumpPCM(connect, (UInt8)ch, argv[2]);
		goto done;
	}

	if (strcmp(cmd, "snapshot") == 0) {
		if (argc < 2 || argc > 3) { usage(prog); goto done; }
		int ch = parseChannel(argv[1], count);
		if (ch < 0) goto done;
		rc = cmdSnapshot(connect, (UInt8)ch, argc == 3 ? argv[2] : NULL);
		goto done;
	}

	if (strcmp(cmd, "force-active") == 0) {
		if (argc != 3) { usage(prog); goto done; }
		int ch = parseChannel(argv[1], count);
		if (ch < 0) goto done;
		bool enable = (strcasecmp(argv[2], "on") == 0 ||
		               strcasecmp(argv[2], "1") == 0 ||
		               strcasecmp(argv[2], "true") == 0);
		rc = cmdForceActive(connect, (UInt8)ch, enable);
		goto done;
	}

	if (strcmp(cmd, "set-eld") == 0) {
		if (argc != 3) { usage(prog); goto done; }
		int ch = parseChannel(argv[1], count);
		if (ch < 0) goto done;
		rc = cmdSetEld(connect, (UInt8)ch, argv[2]);
		goto done;
	}

	if (strcmp(cmd, "clear-override") == 0) {
		if (argc != 2) { usage(prog); goto done; }
		UInt8 ch;
		if (strcasecmp(argv[1], "all") == 0)
			ch = 0xFF;
		else {
			int parsed = parseChannel(argv[1], count);
			if (parsed < 0) goto done;
			ch = (UInt8)parsed;
		}
		rc = cmdClearOverride(connect, ch);
		goto done;
	}

	if (strcmp(cmd, "chord") == 0) {
		if (argc != 3) { usage(prog); goto done; }
		int ch = parseChannel(argv[1], count);
		if (ch < 0) goto done;
		bool enable = (strcasecmp(argv[2], "on") == 0 ||
		               strcasecmp(argv[2], "1") == 0 ||
		               strcasecmp(argv[2], "true") == 0);
		UInt16 flags = channels[ch].diagnosticFlags;
		if (enable)
			flags |= (kVoodooHDADiagEnable | kVoodooHDADiagInjectChord);
		else
			flags &= ~kVoodooHDADiagInjectChord;
		rc = setDiag(connect, (UInt8)ch, flags);
		goto done;
	}

	if (strcmp(cmd, "set") == 0 || strcmp(cmd, "enable") == 0 ||
	    strcmp(cmd, "disable") == 0 || strcmp(cmd, "clear") == 0) {
		int ch;
		UInt16 flags;
		if ((strcmp(cmd, "clear") == 0 && argc != 2) ||
		    (strcmp(cmd, "clear") != 0 && argc != 3)) {
			usage(prog);
			goto done;
		}
		ch = parseChannel(argv[1], count);
		if (ch < 0)
			goto done;
		flags = channels[ch].diagnosticFlags;
		if (strcmp(cmd, "clear") == 0)
			flags = 0;
		else if (strcmp(cmd, "set") == 0)
			flags = parseFlags(argv[2]);
		else if (strcmp(cmd, "enable") == 0)
			flags |= parseFlags(argv[2]);
		else
			flags &= ~parseFlags(argv[2]);
		rc = setDiag(connect, (UInt8)ch, flags);
		goto done;
	}

	usage(prog);

done:
	free(channels);
	if (connect)
		IOServiceClose(connect);
	return rc;
}

static bool isReadOnlyCommand(const char *cmd)
{
	return strcmp(cmd, "list") == 0 ||
	    strcmp(cmd, "get") == 0 ||
	    strcmp(cmd, "report") == 0;
}

int main(int argc, char **argv)
{
	const char *prog = argv[0];
	int serviceIndex = 0;
	bool allServices = false;
	const char *envServ;

	envServ = getenv("VHDA_SERVICE");
	if (envServ && envServ[0]) {
		if (strcasecmp(envServ, "all") == 0)
			allServices = true;
		else
			serviceIndex = (int)strtol(envServ, NULL, 0);
	}

	/* Consume leading --service / -s options (override env). */
	while (argc >= 2) {
		const char *arg = argv[1];
		const char *value = NULL;

		if (strncmp(arg, "--service=", 10) == 0) {
			value = arg + 10;
			argv++;
			argc--;
		} else if (strcmp(arg, "--service") == 0 || strcmp(arg, "-s") == 0) {
			if (argc < 3) {
				usage(prog);
				return 1;
			}
			value = argv[2];
			argv += 2;
			argc -= 2;
		} else {
			break;
		}
		if (strcasecmp(value, "all") == 0) {
			allServices = true;
			serviceIndex = 0;
		} else {
			allServices = false;
			serviceIndex = (int)strtol(value, NULL, 0);
		}
	}

	if (argc < 2) {
		usage(prog);
		return 1;
	}

	if (strcmp(argv[1], "services") == 0)
		return printServices();
	if (strcmp(argv[1], "flags") == 0) {
		for (size_t i = 0; i < sizeof(kFlags) / sizeof(kFlags[0]); i++)
			printf("flag=%s mask=0x%04x\n", kFlags[i].name, kFlags[i].flag);
		return 0;
	}
	if (strcmp(argv[1], "list-elds") == 0) {
		for (size_t i = 0; i < sizeof(kEldPresets) / sizeof(kEldPresets[0]); i++) {
			const EldPreset *p = &kEldPresets[i];
			uint8_t blob[kVoodooHDADiagMaxELDLen];
			int len = buildEldFromPreset(p, blob, sizeof(blob));
			printf("preset=%s len=%d desc=\"%s\"", p->name, len, p->desc);
			printf(" bytes=");
			for (int j = 0; j < len; j++)
				printf("%s%02x", j ? "," : "", blob[j]);
			printf("\n");
		}
		return 0;
	}

	if (allServices) {
		if (!isReadOnlyCommand(argv[1])) {
			fprintf(stderr,
			    "--service=all is only valid with list/get/report; got '%s'\n",
			    argv[1]);
			return 1;
		}
		int total = countServices();
		if (total <= 0) {
			fprintf(stderr, "VoodooHDADevice not found\n");
			return 1;
		}
		int aggregateRc = 0;
		for (int i = 0; i < total; i++) {
			char path[512];
			getServicePath(i, path, sizeof(path));
			printf("=== service=%d path=%s ===\n", i, path);
			int rc = runForService(i, argc - 1, argv + 1, prog);
			if (rc != 0)
				aggregateRc = rc;
		}
		return aggregateRc;
	}

	return runForService(serviceIndex, argc - 1, argv + 1, prog);
}
