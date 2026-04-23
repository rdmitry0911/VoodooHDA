/* Command line diagnostic control for VoodooHDA debug builds. */
#include <CoreFoundation/CoreFoundation.h>
#include <IOKit/IOKitLib.h>
#include <mach/mach.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

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
};

static void usage(const char *prog)
{
	fprintf(stderr,
	    "Usage:\n"
	    "  %s services\n"
	    "  %s list\n"
	    "  %s flags\n"
	    "  %s get <channel|all>\n"
	    "  %s report [channel|all]\n"
	    "  %s set <channel> <mask|flag[,flag...]>\n"
	    "  %s enable <channel> <flag[,flag...]>\n"
	    "  %s disable <channel> <flag[,flag...]>\n"
	    "  %s clear <channel>\n"
	    "  %s verbose <0-4>\n",
	    prog, prog, prog, prog, prog, prog, prog, prog, prog, prog);
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

static kern_return_t openConnection(io_connect_t *connect)
{
	io_service_t service = openServiceByIndex(0);
	kern_return_t kr;

	if (!service) {
		fprintf(stderr, "VoodooHDADevice not found\n");
		return KERN_FAILURE;
	}

	kr = IOServiceOpen(service, mach_task_self(), 0, connect);
	IOObjectRelease(service);
	if (kr != KERN_SUCCESS)
		fprintf(stderr, "IOServiceOpen failed: 0x%x\n", kr);
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

int main(int argc, char **argv)
{
	io_connect_t connect = IO_OBJECT_NULL;
	ChannelInfo *channels = NULL;
	size_t count = 0;
	const char *cmd;
	int rc = 1;

	if (argc < 2) {
		usage(argv[0]);
		return 1;
	}

	cmd = argv[1];
	if (strcmp(cmd, "services") == 0)
		return printServices();
	if (strcmp(cmd, "flags") == 0) {
		for (size_t i = 0; i < sizeof(kFlags) / sizeof(kFlags[0]); i++)
			printf("flag=%s mask=0x%04x\n", kFlags[i].name, kFlags[i].flag);
		return 0;
	}

	if (openConnection(&connect) != KERN_SUCCESS)
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
		if (argc != 3) {
			usage(argv[0]);
			goto done;
		}
		rc = setVerbose(connect, (UInt8)strtoul(argv[2], NULL, 0));
		goto done;
	}

	if (strcmp(cmd, "get") == 0 || strcmp(cmd, "report") == 0) {
		int first = 0;
		int last = (int)count - 1;
		if (argc >= 3 && strcmp(argv[2], "all") != 0) {
			first = parseChannel(argv[2], count);
			if (first < 0)
				goto done;
			last = first;
		}
		for (int ch = first; ch <= last; ch++) {
			VoodooHDADiagTelemetry t;
			kern_return_t kr = getTelemetry(connect, (UInt8)ch, &t);
			if (kr != KERN_SUCCESS) {
				fprintf(stderr, "get telemetry for channel %d failed: 0x%x\n", ch, kr);
				continue;
			}
			printTelemetry(&t);
		}
		rc = 0;
		goto done;
	}

	if (strcmp(cmd, "set") == 0 || strcmp(cmd, "enable") == 0 ||
	    strcmp(cmd, "disable") == 0 || strcmp(cmd, "clear") == 0) {
		int ch;
		UInt16 flags;
		if ((strcmp(cmd, "clear") == 0 && argc != 3) ||
		    (strcmp(cmd, "clear") != 0 && argc != 4)) {
			usage(argv[0]);
			goto done;
		}
		ch = parseChannel(argv[2], count);
		if (ch < 0)
			goto done;
		flags = channels[ch].diagnosticFlags;
		if (strcmp(cmd, "clear") == 0)
			flags = 0;
		else if (strcmp(cmd, "set") == 0)
			flags = parseFlags(argv[3]);
		else if (strcmp(cmd, "enable") == 0)
			flags |= parseFlags(argv[3]);
		else
			flags &= ~parseFlags(argv[3]);
		rc = setDiag(connect, (UInt8)ch, flags);
		goto done;
	}

	usage(argv[0]);

done:
	free(channels);
	if (connect)
		IOServiceClose(connect);
	return rc;
}
