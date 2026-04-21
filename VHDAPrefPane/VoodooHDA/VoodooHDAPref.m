//
//  VoodooHDAPref.m
//  VoodooHDA
//
//  Created by fassl on 15.04.09.
//  Copyright (c) 2009-2013 Voodoo Team. All rights reserved.
//
// Modded by Slice 2010
// Modded by Zenith432 2013 - Support systems with multiple HDA controllers

#import "VoodooHDAPref.h"

@interface VoodooHDAPref ()
- (void)installDiagnosticsUI;
- (void)syncDiagnosticControls;
- (void)updateVisiblePane;
- (BOOL)driverSupportsDebug;
- (UInt16)currentDiagnosticFlags;
- (void)setCurrentDiagnosticFlags:(UInt16)flags;
@end

@implementation VoodooHDAPref

/* Query content area width via osascript (Accessibility API).
   Spawns osascript as a child process to walk the System Settings
   AX tree: Window → SplitGroup → rightmost Group → size. */
static CGFloat detectContentAreaWidth(void) {
	NSTask *task = [[NSTask alloc] init];
	task.executableURL = [NSURL fileURLWithPath:@"/usr/bin/osascript"];
	task.arguments = @[
		@"-l", @"JavaScript", @"-e",
		@"var se=Application('System Events');"
		@"var p=se.processes.byName('System Settings');"
		@"var sg=p.windows[0].groups[0].splitterGroups[0];"
		@"var gs=sg.groups();"
		@"var maxX=-1,w=0;"
		@"for(var i=0;i<gs.length;i++){"
		@"  var pos=gs[i].position();"
		@"  if(pos[0]>maxX){maxX=pos[0];w=gs[i].size()[0]}"
		@"}"
		@"w"
	];
	NSPipe *pipe = [NSPipe pipe];
	task.standardOutput = pipe;
	task.standardError = [NSPipe pipe];

	NSError *err = nil;
	if (![task launchAndReturnError:&err]) return 0.0;
	[task waitUntilExit];

	if (task.terminationStatus != 0) return 0.0;

	NSData *data = [pipe.fileHandleForReading readDataToEndOfFile];
	NSString *output = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
	CGFloat contentWidth = [output doubleValue];

	if (contentWidth < 300 || contentWidth > 1200) return 0.0;
	return contentWidth;
}

static
NSArray* getServices()
{
	io_service_t service;
	mach_port_t masterPort;
	io_iterator_t iter = 0;
	kern_return_t ret;
	io_string_t path;
	NSMutableArray* services;

	services = [NSMutableArray arrayWithCapacity:2U];

	ret = IOMasterPort(MACH_PORT_NULL, &masterPort);
	if (ret != KERN_SUCCESS) {
		NSRunCriticalAlertPanel(
								NSLocalizedString( @"Error", "MsgBox"),
								NSLocalizedString( @"Can't get masterport", "MsgBoxBody" ), nil, nil, nil );
		goto failure;
	}

	ret = IOServiceGetMatchingServices(masterPort, IOServiceMatching(kVoodooHDAClassName), &iter);
	if (ret != KERN_SUCCESS) {
		NSRunCriticalAlertPanel(
								NSLocalizedString( @"Error", "MsgBox"),
								NSLocalizedString( @"VoodooHDA is not running", "MsgBoxBody" ), nil, nil, nil );
		goto failure;
	}

	while ((service = IOIteratorNext(iter)) != 0) {
		ret = IORegistryEntryGetPath(service, kIOServicePlane, path);
		IOObjectRelease(service);
		if (ret != KERN_SUCCESS) {
			NSRunCriticalAlertPanel(
									NSLocalizedString( @"Error", "MsgBox"),
									NSLocalizedString( @"Can't get registry-entry path", "MsgBoxBody" ), nil, nil, nil );
			continue;
		}
		[services addObject:[NSString stringWithUTF8String:path]];
	}

failure:
	if (iter)
		IOObjectRelease(iter);
	return services;
}

static
kern_return_t connectToService(NSString* servicePath, io_connect_t* connect)
{
	mach_port_t masterPort;
	io_registry_entry_t service;
	io_string_t path;
	kern_return_t ret;

	if (!servicePath ||
		![servicePath getCString:path maxLength:sizeof path encoding:NSUTF8StringEncoding])
		return KERN_INVALID_ARGUMENT;
	ret = IOMasterPort(MACH_PORT_NULL, &masterPort);
	if (ret != KERN_SUCCESS)
		return ret;
	service = IORegistryEntryFromPath(masterPort, path);
	if (service == MACH_PORT_NULL)
		return KERN_INVALID_NAME;
	ret = IOServiceOpen((io_service_t) service, mach_task_self(), 0U, connect);
	IOObjectRelease(service);
	return ret;
}

static
NSButton *createDiagnosticCheckbox(NSRect frame, NSString *title, NSInteger tag, id target)
{
	NSButton *button = [[NSButton alloc] initWithFrame:frame];
	[button setButtonType:NSSwitchButton];
	[button setTitle:title];
	[button setTag:tag];
	[button setTarget:target];
	[button setAction:@selector(diagnosticToggled:)];
	[button setAutoresizingMask:NSViewMaxXMargin | NSViewMinYMargin];
	return button;
}

static
NSTextField *createDiagnosticText(NSRect frame, NSString *value, NSFont *font)
{
	NSTextField *field = [[NSTextField alloc] initWithFrame:frame];
	[field setEditable:NO];
	[field setBezeled:NO];
	[field setDrawsBackground:NO];
	[field setSelectable:NO];
	[field setStringValue:value];
	[field setFont:font];
	[field setAutoresizingMask:NSViewWidthSizable | NSViewMinYMargin];
	return field;
}

//get channel info from driver
static
ChannelInfo *updateChannelInfo(NSString* servicePath)
{
	kern_return_t ret;
	io_connect_t connect = 0;
	ChannelInfo *info = 0;
#if __LP64__
	mach_vm_address_t address;
	mach_vm_size_t size;
#else
	vm_address_t address;
	vm_size_t size;
#endif

	ret = connectToService(servicePath, &connect);
	if (ret != KERN_SUCCESS) {
		NSRunCriticalAlertPanel(
								NSLocalizedString( @"Error", "MsgBox"),
								NSLocalizedString( @"Can't open IO Service", "MsgBoxBody" ), nil, nil, nil );
		goto failure;
	}

	ret = IOConnectMapMemory(connect, kVoodooHDAChannelNames, mach_task_self(), &address, &size,
							 kIOMapAnywhere | kIOMapDefaultCache | kIOMapReadOnly);
	if (ret != kIOReturnSuccess) {
		NSRunCriticalAlertPanel(
								NSLocalizedString( @"Error", "MsgBox"),
								NSLocalizedString( @"Can't map Memory", "MsgBoxBody" ), nil, nil, nil );
		goto failure;
	}

	info = malloc((size_t) size);
	if (!info) {
		NSRunCriticalAlertPanel(
								NSLocalizedString( @"Error", "MsgBox"),
								NSLocalizedString( @"Can't allocate memory", "MsgBoxBody" ), nil, nil, nil );
		goto failure;
	}
	memcpy(info, (void const*) address, (size_t) size);

failure:
	if (connect)
		IOServiceClose(connect);

	return info;
}

- (bool) updateSliders
{
	ChannelInfo* info;

	if (!services || currentService < 0)
		goto failure;

	if (chInfo) {
		free(chInfo);
		chInfo = 0;
	}
	if (!(chInfo = updateChannelInfo((NSString*) [services objectAtIndex:currentService])))  //from driver
		goto failure;

	info = chInfo;

	if(!(info[currentChannel].mixerValues[0].enabled))
		[sliderBass setEnabled:FALSE];
	else
		[sliderBass setEnabled:TRUE];
	[sliderBass setIntValue:info[currentChannel].mixerValues[0].value];

	if(!(info[currentChannel].mixerValues[1].enabled))
		[sliderTreble setEnabled:FALSE];
	else
		[sliderTreble setEnabled:TRUE];
	[sliderTreble setIntValue:info[currentChannel].mixerValues[1].value];

	if(!(info[currentChannel].mixerValues[2].enabled))
		[sliderSynth setEnabled:FALSE];
	else
		[sliderSynth setEnabled:TRUE];
	[sliderSynth setIntValue:info[currentChannel].mixerValues[2].value];

	if(!(info[currentChannel].mixerValues[3].enabled))
		[sliderPCM setEnabled:FALSE];
	else
		[sliderPCM setEnabled:TRUE];
	[sliderPCM setIntValue:info[currentChannel].mixerValues[3].value];

	if(!(info[currentChannel].mixerValues[4].enabled))
		[sliderSpeaker setEnabled:FALSE];
	else
		[sliderSpeaker setEnabled:TRUE];
	[sliderSpeaker setIntValue:info[currentChannel].mixerValues[4].value];

	if(!(info[currentChannel].mixerValues[5].enabled))
		[sliderLine setEnabled:FALSE];
	else
		[sliderLine setEnabled:TRUE];
	[sliderLine setIntValue:info[currentChannel].mixerValues[5].value];

	if(!(info[currentChannel].mixerValues[6].enabled))
		[sliderMic setEnabled:FALSE];
	else
		[sliderMic setEnabled:TRUE];
	[sliderMic setIntValue:info[currentChannel].mixerValues[6].value];

	if(!(info[currentChannel].mixerValues[7].enabled))
		[sliderCD setEnabled:FALSE];
	else
		[sliderCD setEnabled:TRUE];
	[sliderCD setIntValue:info[currentChannel].mixerValues[7].value];

	if(!(info[currentChannel].mixerValues[8].enabled))
		[sliderIMix setEnabled:FALSE];
	else
		[sliderIMix setEnabled:TRUE];
	[sliderIMix setIntValue:info[currentChannel].mixerValues[8].value];

	if(!(info[currentChannel].mixerValues[9].enabled))
		[sliderAltPCM setEnabled:FALSE];
	else
		[sliderAltPCM setEnabled:TRUE];
	[sliderAltPCM setIntValue:info[currentChannel].mixerValues[9].value];

	if(!(info[currentChannel].mixerValues[10].enabled))
		[sliderRecLev setEnabled:FALSE];
	else
		[sliderRecLev setEnabled:TRUE];
	[sliderRecLev setIntValue:info[currentChannel].mixerValues[10].value];

	if(!(info[currentChannel].mixerValues[11].enabled))
		[sliderIGain setEnabled:FALSE];
	else
		[sliderIGain setEnabled:TRUE];
	[sliderIGain setIntValue:info[currentChannel].mixerValues[11].value];

	if(!(info[currentChannel].mixerValues[12].enabled))
		[sliderOGain setEnabled:FALSE];
	else
		[sliderOGain setEnabled:TRUE];
	[sliderOGain setIntValue:info[currentChannel].mixerValues[12].value];

	if(!(info[currentChannel].mixerValues[13].enabled))
		[sliderLine1 setEnabled:FALSE];
	else
		[sliderLine1 setEnabled:TRUE];
	[sliderLine1 setIntValue:info[currentChannel].mixerValues[13].value];

	if(!(info[currentChannel].mixerValues[14].enabled))
		[sliderLine2 setEnabled:FALSE];
	else
		[sliderLine2 setEnabled:TRUE];
	[sliderLine2 setIntValue:info[currentChannel].mixerValues[14].value];

	if(!(info[currentChannel].mixerValues[15].enabled))
		[sliderLine3 setEnabled:FALSE];
	else
		[sliderLine3 setEnabled:TRUE];
	[sliderLine3 setIntValue:info[currentChannel].mixerValues[15].value];

	if(!(info[currentChannel].mixerValues[16].enabled))
		[sliderDigital1 setEnabled:FALSE];
	else
		[sliderDigital1 setEnabled:TRUE];
	[sliderDigital1 setIntValue:info[currentChannel].mixerValues[16].value];

	if(!(info[currentChannel].mixerValues[17].enabled))
		[sliderDigital2	setEnabled:FALSE];
	else
		[sliderDigital2 setEnabled:TRUE];
	[sliderDigital2 setIntValue:info[currentChannel].mixerValues[17].value];

	if(!(info[currentChannel].mixerValues[18].enabled))
		[sliderDigital3 setEnabled:FALSE];
	else
		[sliderDigital3 setEnabled:TRUE];
	[sliderDigital3 setIntValue:info[currentChannel].mixerValues[18].value];

	if(!(info[currentChannel].mixerValues[19].enabled))
		[sliderPhoneIn setEnabled:FALSE];
	else
		[sliderPhoneIn setEnabled:TRUE];
	[sliderPhoneIn setIntValue:info[currentChannel].mixerValues[19].value];

	if(!(info[currentChannel].mixerValues[20].enabled))
		[sliderPhoneOut setEnabled:FALSE];
	else
		[sliderPhoneOut setEnabled:TRUE];
	[sliderPhoneOut setIntValue:info[currentChannel].mixerValues[20].value];

	if(!(info[currentChannel].mixerValues[21].enabled))
		[sliderVideo setEnabled:FALSE];
	else
		[sliderVideo setEnabled:TRUE];
	[sliderVideo setIntValue:info[currentChannel].mixerValues[21].value];

	if(!(info[currentChannel].mixerValues[22].enabled))
		[sliderRadio setEnabled:FALSE];
	else
		[sliderRadio setEnabled:TRUE];
	[sliderRadio setIntValue:info[currentChannel].mixerValues[22].value];

	if(!(info[currentChannel].mixerValues[23].enabled))
		[sliderMonitor setEnabled:FALSE];
	else
		[sliderMonitor setEnabled:TRUE];
	[sliderMonitor setIntValue:info[currentChannel].mixerValues[23].value];

/*	if(!(info[currentChannel].mixerValues[24].enabled))
		[sliderVolume setEnabled:FALSE];
	else */
		[sliderVolume setEnabled:TRUE];
	[sliderVolume setIntValue:info[currentChannel].mixerValues[24].value];

    [sliderNoise setIntValue:info[currentChannel].noiseLevel];
	[sliderStereo setIntValue:info[currentChannel].StereoBase];

	[soundVector setState:info[currentChannel].vectorize?NSOnState:NSOffState];
	[stereoEnhance setState:info[currentChannel].useStereo?NSOnState:NSOffState];
	[self syncDiagnosticControls];

	return true;
failure:
	return false;
}

- (bool) updateMath
{
	kern_return_t ret;
	io_connect_t connect = 0;
	actionInfo in, out;
	UInt8 ch;
	size_t outsize;

	if (!chInfo || !services || currentService < 0)
		goto failure;

	ret = connectToService((NSString*) [services objectAtIndex:currentService], &connect);
	if (ret != KERN_SUCCESS) {
		NSRunCriticalAlertPanel(
								NSLocalizedString( @"Error", "MsgBox"),
								NSLocalizedString( @"Can't open IO Service", "MsgBoxBody" ), nil, nil, nil );
		goto failure;
	}
	//to driver
	ch = currentChannel;
	in.value = 0;
	in.info.action = (UInt8)kVoodooHDAActionSetMath;
	in.info.channel = currentChannel;
	in.info.device = (chInfo[ch].vectorize?1:0) | (chInfo[ch].useStereo?2:0);
	in.info.val = (chInfo[ch].noiseLevel & 0x0f) | ((chInfo[ch].StereoBase & 0x0f) << 4);
//	[versionText setStringValue:[NSString stringWithFormat:@"Device=%d Val=0x%04x Volume=%d",
//								 in.info.device, in.info.val, chInfo[ch].mixerValues[24].value]];
	outsize = sizeof out;
#if MAC_OS_X_VERSION_MIN_REQUIRED <= MAC_OS_X_VERSION_10_4
    ret = IOConnectMethodStructureIStructureO( connect,
											   kVoodooHDAActionMethod,
											   sizeof in,	/* structureInputSize */
											   &outsize,	/* structureOutputSize */
											   &in,			/* inputStructure */
											   &out);		/* ouputStructure */
#else

	ret = IOConnectCallStructMethod(connect,
									kVoodooHDAActionMethod,
									&in,
									sizeof in,
									&out,
									&outsize
									);
#endif
	if (ret != KERN_SUCCESS) {
		NSRunCriticalAlertPanel(
								NSLocalizedString( @"Error", "MsgBox"),
								NSLocalizedString( @"Can't connect to StructMethod to send commands", "MsgBoxBody" ), nil, nil, nil );
		goto failure;
	}

	if(connect)
		IOServiceClose(connect);

	return true;

failure:
	if(connect)
		IOServiceClose(connect);

	return false;
}

- (UInt16) currentDiagnosticFlags
{
	if (!chInfo)
		return 0;
	return chInfo[currentChannel].diagnosticFlags;
}

- (void) setCurrentDiagnosticFlags:(UInt16)flags
{
	if (!chInfo)
		return;
	chInfo[currentChannel].diagnosticFlags = flags;
}

- (BOOL) driverSupportsDebug
{
	if (!chInfo)
		return NO;
	return (chInfo[currentChannel].buildFlags & kVoodooHDABuildSupportsDebug) != 0;
}

- (bool) updateDiagnostics
{
#if !VOODOO_HDA_DEBUG_BUILD
	return false;
#else
	kern_return_t ret;
	io_connect_t connect = 0;
	actionInfo in, out;
	size_t outsize;
	UInt16 flags;

	if (!chInfo || !services || currentService < 0)
		goto failure;

	ret = connectToService((NSString*) [services objectAtIndex:currentService], &connect);
	if (ret != KERN_SUCCESS) {
		NSRunCriticalAlertPanel(
								NSLocalizedString( @"Error", "MsgBox"),
								NSLocalizedString( @"Can't open IO Service", "MsgBoxBody" ), nil, nil, nil );
		goto failure;
	}

	flags = [self currentDiagnosticFlags];
	in.value = 0;
	in.info.action = (UInt8)kVoodooHDAActionSetDiag;
	in.info.channel = currentChannel;
	in.info.device = flags & 0xff;
	in.info.val = (flags >> 8) & 0xff;

	outsize = sizeof out;
#if MAC_OS_X_VERSION_MIN_REQUIRED <= MAC_OS_X_VERSION_10_4
	ret = IOConnectMethodStructureIStructureO(connect,
											  kVoodooHDAActionMethod,
											  sizeof in,
											  &outsize,
											  &in,
											  &out);
#else
	ret = IOConnectCallStructMethod(connect,
									kVoodooHDAActionMethod,
									&in,
									sizeof in,
									&out,
									&outsize);
#endif
	if (ret != KERN_SUCCESS) {
		NSRunCriticalAlertPanel(
								NSLocalizedString( @"Error", "MsgBox"),
								NSLocalizedString( @"Can't connect to StructMethod to send commands", "MsgBoxBody" ), nil, nil, nil );
		goto failure;
	}

	if (connect)
		IOServiceClose(connect);

	return true;

failure:
	if (connect)
		IOServiceClose(connect);

	return false;
#endif
}

- (bool) updateDebugOptions
{
#if !VOODOO_HDA_DEBUG_BUILD
	return false;
#else
	kern_return_t ret;
	io_connect_t connect = 0;
	actionInfo in, out;
	size_t outsize;
	UInt8 level;

	if (!chInfo || !services || currentService < 0 || ![self driverSupportsDebug])
		goto failure;

	ret = connectToService((NSString *)[services objectAtIndex:currentService], &connect);
	if (ret != KERN_SUCCESS) {
		NSRunCriticalAlertPanel(
								NSLocalizedString( @"Error", "MsgBox"),
								NSLocalizedString( @"Can't open IO Service", "MsgBoxBody" ), nil, nil, nil );
		goto failure;
	}

	level = chInfo[currentChannel].debugLevel;
	in.value = 0;
	in.info.action = (UInt8)kVoodooHDAActionSetDebug;
	in.info.channel = currentChannel;
	in.info.device = 0;
	in.info.val = level;
	outsize = sizeof out;
#if MAC_OS_X_VERSION_MIN_REQUIRED <= MAC_OS_X_VERSION_10_4
	ret = IOConnectMethodStructureIStructureO(connect, kVoodooHDAActionMethod, sizeof in, &outsize, &in, &out);
#else
	ret = IOConnectCallStructMethod(connect, kVoodooHDAActionMethod, &in, sizeof in, &out, &outsize);
#endif
	if (ret != KERN_SUCCESS) {
		NSRunCriticalAlertPanel(
								NSLocalizedString( @"Error", "MsgBox"),
								NSLocalizedString( @"Can't connect to StructMethod to send commands", "MsgBoxBody" ), nil, nil, nil );
		goto failure;
	}

	if (connect)
		IOServiceClose(connect);
	return true;

failure:
	if (connect)
		IOServiceClose(connect);
	return false;
#endif
}

- (void) updateVisiblePane
{
#if !VOODOO_HDA_DEBUG_BUILD
	return;
#else
	BOOL showDiagnostics = (activePane == 1) && diagnosticsBox && [self driverSupportsDebug];

	[mixerBox setHidden:showDiagnostics];
	[soundTreatmentBox setHidden:showDiagnostics];
	[diagnosticsBox setHidden:!showDiagnostics];
#endif
}

- (void) syncDiagnosticControls
{
	if (!VOODOO_HDA_DEBUG_BUILD)
		return;

#if VOODOO_HDA_DEBUG_BUILD
	UInt16 flags;
	BOOL driverDebug;
	BOOL playbackChannel;
	BOOL enabled;
	NSArray *buttons;

	if (!diagEnableButton || !chInfo || currentService < 0 || currentChannel >= chInfo[0].numChannels)
		return;

	updatingDiagnosticsUI = YES;
	flags = [self currentDiagnosticFlags];
	driverDebug = [self driverSupportsDebug];
	playbackChannel = (chInfo[currentChannel].direction == 1);
	enabled = driverDebug && playbackChannel;

	[diagEnableButton setState:(flags & kVoodooHDADiagEnable) ? NSControlStateValueOn : NSControlStateValueOff];
	[diagMixToneButton setState:(flags & kVoodooHDADiagInjectMixTone) ? NSControlStateValueOn : NSControlStateValueOff];
	[diagDirectToneButton setState:(flags & kVoodooHDADiagInjectDirectTone) ? NSControlStateValueOn : NSControlStateValueOff];
	[diagPrimeButton setState:(flags & kVoodooHDADiagPrimeBufferOnStart) ? NSControlStateValueOn : NSControlStateValueOff];
	[diagFreezeButton setState:(flags & kVoodooHDADiagFreezeBuffer) ? NSControlStateValueOn : NSControlStateValueOff];
	[diagSkipEraseButton setState:(flags & kVoodooHDADiagSkipErase) ? NSControlStateValueOn : NSControlStateValueOff];
	[diagBypassProcessingButton setState:(flags & kVoodooHDADiagBypassProcessing) ? NSControlStateValueOn : NSControlStateValueOff];

	buttons = [NSArray arrayWithObjects:diagEnableButton, diagMixToneButton,
	           diagDirectToneButton, diagPrimeButton, diagFreezeButton,
	           diagSkipEraseButton, diagBypassProcessingButton, nil];
	for (NSButton *button in buttons)
		[button setEnabled:enabled];

	[verboseSelector selectItemWithTag:chInfo[currentChannel].debugLevel];
	[verboseSelector setEnabled:driverDebug];
	[verboseText setEnabled:driverDebug];

	if (!driverDebug) {
		[diagnosticsInfoText setStringValue:@"This driver build does not expose debug diagnostics or runtime verbose logging."];
		activePane = 0;
	} else if (!playbackChannel) {
		[diagnosticsInfoText setStringValue:@"Diagnostics affect playback channels only. Verbose logging remains available for this debug build."];
	} else if (chInfo[currentChannel].digital >= 2) {
		[diagnosticsInfoText setStringValue:@"Current channel is HDMI/DP. Direct tone + prime/freeze isolates DMA and transport; mix tone then checks clip/conversion."];
	} else {
		[diagnosticsInfoText setStringValue:@"Current channel is analog/SPDIF. Mix/direct tone and erase/process toggles isolate the software path."];
	}

	[paneSelector setHidden:!driverDebug];
	[self updateVisiblePane];
	updatingDiagnosticsUI = NO;
#endif
}

- (void) installDiagnosticsUI
{
	NSView *mainView = [self mainView];

	for (NSView *sub in mainView.subviews) {
		if (![sub isKindOfClass:[NSBox class]])
			continue;
		if ([[(NSBox *)sub title] isEqualToString:@"Mixer Controls"])
			mixerBox = (NSBox *)sub;
		else if ([[(NSBox *)sub title] isEqualToString:@"Sound treatment"])
			soundTreatmentBox = (NSBox *)sub;
	}

#if VOODOO_HDA_DEBUG_BUILD
	if (!mixerBox || !soundTreatmentBox)
		return;

	paneSelector = [[NSSegmentedControl alloc] initWithFrame:NSMakeRect(12, 392, 200, 24)];
	[paneSelector setSegmentCount:2];
	[paneSelector setLabel:@"Controls" forSegment:0];
	[paneSelector setLabel:@"Debug" forSegment:1];
	[paneSelector setTarget:self];
	[paneSelector setAction:@selector(paneChanged:)];
	[paneSelector setSelectedSegment:0];
	[paneSelector setAutoresizingMask:NSViewMaxXMargin | NSViewMinYMargin];
	[mainView addSubview:paneSelector];

	diagnosticsBox = [[NSBox alloc] initWithFrame:NSMakeRect(0, 16, 600, 370)];
	[diagnosticsBox setTitle:@"Debug Diagnostics"];
	[diagnosticsBox setAutoresizingMask:NSViewWidthSizable | NSViewMinYMargin];
	[diagnosticsBox setHidden:YES];
	[mainView addSubview:diagnosticsBox];

	NSView *content = [diagnosticsBox contentView];
	[content addSubview:createDiagnosticText(NSMakeRect(14, 322, 560, 18),
	                                         @"Debug-only routing controls. Direct tone overrides mix tone.",
	                                         [NSFont boldSystemFontOfSize:12.0])];
	diagnosticsInfoText = createDiagnosticText(NSMakeRect(14, 292, 560, 28), @"", [NSFont systemFontOfSize:11.0]);
	[[diagnosticsInfoText cell] setWraps:YES];
	[[diagnosticsInfoText cell] setScrollable:NO];
	[content addSubview:diagnosticsInfoText];

	verboseText = createDiagnosticText(NSMakeRect(14, 255, 110, 18), @"Verbose logging", [NSFont systemFontOfSize:12.0]);
	[content addSubview:verboseText];
	verboseSelector = [[NSPopUpButton alloc] initWithFrame:NSMakeRect(130, 250, 140, 26) pullsDown:NO];
	for (NSInteger level = 0; level <= 4; level++) {
		NSString *title = [NSString stringWithFormat:@"Level %ld", (long)level];
		[[verboseSelector menu] addItemWithTitle:title action:nil keyEquivalent:@""];
		[[verboseSelector lastItem] setTag:level];
	}
	[verboseSelector setTarget:self];
	[verboseSelector setAction:@selector(verboseChanged:)];
	[content addSubview:verboseSelector];

	[content addSubview:(diagEnableButton = createDiagnosticCheckbox(NSMakeRect(14, 220, 250, 18),
	                                                                 @"Enable diagnostic mode", 0, self))];
	[content addSubview:(diagMixToneButton = createDiagnosticCheckbox(NSMakeRect(14, 192, 250, 18),
	                                                                  @"Inject tone in mix buffer", 1, self))];
	[content addSubview:(diagDirectToneButton = createDiagnosticCheckbox(NSMakeRect(14, 164, 250, 18),
	                                                                     @"Inject tone direct to sample buffer", 2, self))];
	[content addSubview:(diagPrimeButton = createDiagnosticCheckbox(NSMakeRect(14, 136, 250, 18),
	                                                                @"Prime full DMA buffer on start", 3, self))];
	[content addSubview:(diagFreezeButton = createDiagnosticCheckbox(NSMakeRect(290, 220, 250, 18),
	                                                                 @"Freeze buffer after first fill", 4, self))];
	[content addSubview:(diagSkipEraseButton = createDiagnosticCheckbox(NSMakeRect(290, 192, 250, 18),
	                                                                    @"Skip eraseOutputSamples", 5, self))];
	[content addSubview:(diagBypassProcessingButton = createDiagnosticCheckbox(NSMakeRect(290, 164, 250, 18),
	                                                                           @"Bypass Voodoo processing", 6, self))];

	[content addSubview:createDiagnosticText(NSMakeRect(14, 54, 560, 66),
	                                         @"Suggested path: 1) direct tone + prime + freeze tests DMA/transport, 2) direct tone without freeze tests buffer service, 3) mix tone tests clip/conversion, 4) skip erase and bypass processing isolate overwrite/corruption paths, 5) raise verbose level only while reproducing the fault.",
	                                         [NSFont systemFontOfSize:11.0])];
	activePane = 0;
	[self updateVisiblePane];
#endif
}

static
NSString* trimIORegistryPathForDisplay(NSString* path)
{
	NSRange subName;
	NSUInteger i, l = [path length];
	subName.location = 0U;
	for (i = 0U; i < l - 1U; ++i)
		if ([path characterAtIndex:i] == L':') {
			subName.location = i + 1U;
			break;
		}
	subName.length = l - subName.location;
	for (i = l - 1U; i > subName.location; --i)
		if ([path characterAtIndex:i] == L'/') {
			subName.length = i - subName.location;
			break;
		}
	return [path substringWithRange:subName];
}

- (bool) populateHDASelector
{
	if (!services || currentService < 0)
		return false;
	[HDAselector removeAllItems];
	for (NSString* s in services)
		[HDAselector addItemWithTitle:trimIORegistryPathForDisplay(s)];
	[HDAselector selectItemAtIndex:currentService];
	return true;
}

- (bool) populateSelector
{
	ChannelInfo* info;
	int i, N;

	info = chInfo;
	if (!info)
		return false;

	[selector removeAllItems];

	i=0;
	N = info[0].numChannels;
	if (N<=0 || N>24) {
		N=3;
		NSRunCriticalAlertPanel(
								NSLocalizedString( @"Error", "MsgBox"),
								NSLocalizedString( @"Wrong Channels Number 0..24", "MsgBoxBody" ), nil, nil, nil );

	}

	for (; i < N; i++){
		NSString *suffix = @"";
		if      (info[i].digital == 2) suffix = @" [HDMI]";
		else if (info[i].digital == 3) suffix = @" [DP]";
		else if (info[i].digital == 1) suffix = @" [Digital]";
		[selector addItemWithTitle:[NSString stringWithFormat:@"%d: %s%@", i+1, info[i].name, suffix]];
	}
	[selector selectItemAtIndex:currentChannel];
	return true;
}

- (void) mainViewDidLoad
{
	[super mainViewDidLoad];
	NSView *mv = [self mainView];
	/* Save XIB dimensions before any layout changes — these are read from
	   the actual XIB at load time, not hardcoded. */
	initialViewWidth = NSWidth(mv.frame);
	for (NSView *sub in mv.subviews) {
		if ([sub isKindOfClass:[NSBox class]]) {
			designBoxWidth = NSWidth(sub.frame);
			break;
		}
	}
	mv.postsFrameChangedNotifications = YES;
	[[NSNotificationCenter defaultCenter] addObserver:self
											 selector:@selector(mainViewFrameChanged:)
												 name:NSViewFrameDidChangeNotification
											   object:mv];
	[self installDiagnosticsUI];
	services = getServices();
	if (services.count > 0U)
		currentService = 0;
	else
		currentService = -1;

	if (![self populateHDASelector])
		goto failure;

	[versionText setStringValue:@"Loaded"];

	return;

failure:
	[versionText setStringValue:@"ERROR"];
}

static
bool sendAction(NSString* servicePath, UInt8 ch, UInt8 dev, UInt8 val)
{  //value of slider to driver
	kern_return_t ret;
	io_connect_t connect = 0;
	actionInfo in, out;
	size_t outsize;

	ret = connectToService(servicePath, &connect);
	if (ret != KERN_SUCCESS) {
		NSRunCriticalAlertPanel(
								NSLocalizedString( @"Error", "MsgBox"),
								NSLocalizedString( @"Can't open IO Service", "MsgBoxBody" ), nil, nil, nil );
		goto failure;
	}

	in.value = 0;
	in.info.action = (UInt8)kVoodooHDAActionSetMixer;
	in.info.channel = ch;
	in.info.device = dev;
	in.info.val = val;

	outsize = sizeof out;
#if MAC_OS_X_VERSION_MIN_REQUIRED <= MAC_OS_X_VERSION_10_4
    ret = IOConnectMethodStructureIStructureO( connect, kVoodooHDAActionMethod,
											  sizeof in,	/* structureInputSize */
											  &outsize,		/* structureOutputSize */
											  &in,			/* inputStructure */
											  &out);		/* ouputStructure */
#else

	ret = IOConnectCallStructMethod(connect,
									kVoodooHDAActionMethod,
									&in,
									sizeof in,
									&out,
									&outsize
									);
#endif
	if (ret != KERN_SUCCESS) {
		NSRunCriticalAlertPanel(
								NSLocalizedString( @"Error", "MsgBox"),
								NSLocalizedString( @"Can't connect to StructMethod to send commands", "MsgBoxBody" ), nil, nil, nil );
//		goto failure;  //anyway
	}

failure:

	if(connect)
		IOServiceClose(connect);

	return ret == KERN_SUCCESS ? true : false;
}

- (IBAction)sliderMoved:(NSSlider *)sender
{
	UInt8 device = 0U;
	if (!chInfo || !services || currentService < 0)
		return;
	if (sender == sliderNoise){
		chInfo[currentChannel].noiseLevel = [sender intValue];
		[self updateMath];
		return;
	}
	if (sender == sliderStereo) {
		chInfo[currentChannel].StereoBase = [sender intValue] + 7;
		[self updateMath];
		return;
	}

	if(sender == sliderBass)			device=1;
	else if(sender == sliderTreble)		device=2;
	else if(sender == sliderSynth)		device=3;
	else if(sender == sliderPCM)		device=4;
	else if(sender == sliderSpeaker)	device=5;
	else if(sender == sliderLine)		device=6;
	else if(sender == sliderMic)		device=7;
	else if(sender == sliderCD)			device=8;
	else if(sender == sliderIMix)		device=9;
	else if(sender == sliderAltPCM)		device=10;
	else if(sender == sliderRecLev)		device=11;
	else if(sender == sliderIGain)		device=12;
	else if(sender == sliderOGain)		device=13;
	else if(sender == sliderLine1)		device=14;
	else if(sender == sliderLine2)		device=15;
	else if(sender == sliderLine3)		device=16;
	else if(sender == sliderDigital1)	device=17;
	else if(sender == sliderDigital2)	device=18;
	else if(sender == sliderDigital3)	device=19;
	else if(sender == sliderPhoneIn)	device=20;
	else if(sender == sliderPhoneOut)	device=21;
	else if(sender == sliderVideo)		device=22;
	else if(sender == sliderRadio)		device=23;
	else if(sender == sliderMonitor)	device=24;
	else if(sender == sliderVolume)		device=0;

	sendAction((NSString*) [services objectAtIndex:currentService], currentChannel, device, [sender intValue]);
}

- (IBAction)selectorChanged:(NSPopUpButton *)sender
{
	if (sender == selector) {
		currentChannel = (int)[sender indexOfSelectedItem];
		[self updateSliders];
		return;
	}
	if (sender == HDAselector) {
		if (!services)
			return;
		currentService = [sender indexOfSelectedItem];
		currentChannel = 0U;
		[self updateSliders];
		[self populateSelector];
	}
}

- (IBAction)paneChanged:(NSSegmentedControl *)sender
{
#if !VOODOO_HDA_DEBUG_BUILD
	(void)sender;
	return;
#else
	if (updatingDiagnosticsUI || sender != paneSelector)
		return;
	activePane = [sender selectedSegment];
	[self updateVisiblePane];
#endif
}

- (IBAction)diagnosticToggled:(NSButton *)sender
{
	UInt16 flags;
	UInt16 bit;

	if (updatingDiagnosticsUI || !chInfo || !services || currentService < 0)
		return;

	switch ([sender tag]) {
		case 0: bit = kVoodooHDADiagEnable; break;
		case 1: bit = kVoodooHDADiagInjectMixTone; break;
		case 2: bit = kVoodooHDADiagInjectDirectTone; break;
		case 3: bit = kVoodooHDADiagPrimeBufferOnStart; break;
		case 4: bit = kVoodooHDADiagFreezeBuffer; break;
		case 5: bit = kVoodooHDADiagSkipErase; break;
		case 6: bit = kVoodooHDADiagBypassProcessing; break;
		default: return;
	}

	flags = [self currentDiagnosticFlags];
	if ([sender state] == NSOnState)
		flags |= bit;
	else
		flags &= ~bit;

	[self setCurrentDiagnosticFlags:flags];
	[self updateDiagnostics];
	[self syncDiagnosticControls];
}

- (IBAction)verboseChanged:(NSPopUpButton *)sender
{
#if !VOODOO_HDA_DEBUG_BUILD
	(void)sender;
	return;
#else
	NSInteger tag;

	if (updatingDiagnosticsUI || sender != verboseSelector || !chInfo || ![self driverSupportsDebug])
		return;

	tag = [[sender selectedItem] tag];
	if (tag < 0)
		tag = 0;
	chInfo[currentChannel].debugLevel = (UInt8)tag;
	[self updateDebugOptions];
	[self syncDiagnosticControls];
#endif
}

- (void) didUnselect
{
	[super didUnselect];
	[self saveSettings];
}

- (bool) saveSettings
{
	bool res = false;
	NSOutputStream *outputFile;
	NSMutableDictionary *outerSettings, *innerSettings;
	NSError *outputError;
	NSInteger bytesWritten;
	NSString *nPath = [@"~/Library/Preferences/VoodooHDA.settings.plist" stringByExpandingTildeInPath];
	if (!services || currentService < 0)
		goto failure;
	outerSettings = [NSMutableDictionary dictionaryWithCapacity:2U];
	innerSettings = [NSMutableDictionary dictionaryWithCapacity:services.count];
	[outerSettings setObject:@"1.2" forKey:@"Version"];
	for (NSString* device in services) {
		if (chInfo) {
			free(chInfo);
			chInfo = 0;
		}
		if (!(chInfo = updateChannelInfo(device)))
			continue;
		[innerSettings setObject:[NSData dataWithBytes:chInfo length:(chInfo->numChannels * sizeof *chInfo)]
						  forKey:device];
	}
	if (chInfo) {
		free(chInfo);
		chInfo = 0;
	}
	if (innerSettings.count < 1U)
		goto failure;
	[outerSettings setObject:innerSettings forKey:@"Devices"];
	outputFile = (NSOutputStream*) [NSOutputStream outputStreamToFileAtPath:nPath append:NO];
	if (!outputFile)
		goto failure;
	[outputFile open];
	if (outputFile.streamStatus != NSStreamStatusOpen) {
		NSRunCriticalAlertPanel(
								NSLocalizedString( @"Couldn't save settings file", "MsgBox"),
								NSLocalizedString( @"Error opening file", "MsgBoxBody" ), nil, nil, nil );
		goto failure;
	}
	bytesWritten = [NSPropertyListSerialization writePropertyList:outerSettings
														  toStream:outputFile
															format:NSPropertyListBinaryFormat_v1_0
														   options:0U
															 error:&outputError];
	[outputFile close];
	if (bytesWritten <= 0)
		goto failure;

	res = true;
failure:

	return res;
}
//Just a sample
/*- (void) changeVersionText
{
	[versionText setStringValue:@"Bla"];
}
*/
/*
- (IBAction)enableAllSLiders:(NSButton *)sender {
	[sliderBass setEnabled:TRUE];
	[sliderTreble setEnabled:TRUE];
	[sliderSynth setEnabled:TRUE];
	[sliderPCM setEnabled:TRUE];
	[sliderSpeaker setEnabled:TRUE];
	[sliderLine setEnabled:TRUE];
	[sliderMic setEnabled:TRUE];
	[sliderCD setEnabled:TRUE];
	[sliderIMix setEnabled:TRUE];
	[sliderAltPCM setEnabled:TRUE];
	[sliderRecLev setEnabled:TRUE];
	[sliderIGain setEnabled:TRUE];
	[sliderOGain setEnabled:TRUE];
	[sliderLine1 setEnabled:TRUE];
	[sliderLine2 setEnabled:TRUE];
	[sliderLine3 setEnabled:TRUE];
	[sliderDigital1 setEnabled:TRUE];
	[sliderDigital2 setEnabled:TRUE];
	[sliderDigital3 setEnabled:TRUE];
	[sliderPhoneIn setEnabled:TRUE];
	[sliderPhoneOut setEnabled:TRUE];
	[sliderVideo setEnabled:TRUE];
	[sliderRadio setEnabled:TRUE];
	[sliderMonitor setEnabled:TRUE];

//	[sliderVolume setEnabled:TRUE];
//	[sliderNoise setEnabled:TRUE];

}
*/
- (IBAction)useStereoEnhance:(NSButton *)sender
{
	bool useStereo;
	if (!chInfo || !services || currentService < 0)
		return;
	useStereo = ([stereoEnhance state]==NSOnState);
	chInfo[currentChannel].useStereo = useStereo;
	[self updateMath];
}

- (IBAction)SSEChanged:(NSButton *)sender
{
	bool vector;
	if (!chInfo || !services || currentService < 0)
		return;
	vector = ([soundVector state]==NSOnState);
	chInfo[currentChannel].vectorize = vector;
	[self updateMath];
}

static
void disableViewRecursive(NSView* view)
{
	NSArray* subViews = [view subviews];

	for (NSView* currentView in subViews) {
		if ([currentView isKindOfClass:[NSControl class]])
			[(NSControl*) currentView setEnabled:FALSE];
		disableViewRecursive(currentView);
	}
}

- (void) adjustLayout
{
	if (inAdjustLayout) return;
	inAdjustLayout = YES;

	NSView *mainView = [self mainView];
	CGFloat viewWidth = NSWidth(mainView.frame);

	if (viewWidth <= initialViewWidth) {
		/* Tahoe: host didn't resize us — detect real content area via
		   CGWindowList and resize view+window to fill it. */
		if (detectedContentWidth <= 0.0)
			detectedContentWidth = detectContentAreaWidth();

		if (detectedContentWidth > 0.0) {
			/* Resize view and window to actual content area width */
			NSRect vf = mainView.frame;
			vf.size.width = detectedContentWidth;
			mainView.frame = vf;
			NSWindow *win = mainView.window;
			if (win) {
				NSRect wf = win.frame;
				wf.size.width = detectedContentWidth;
				[win setFrame:wf display:YES];
			}
			viewWidth = detectedContentWidth;
			/* Fall through to stretch logic below */
		} else {
			/* Fallback: use design width (functional but not perfectly margined) */
			NSRect vf = mainView.frame;
			vf.size.width = designBoxWidth;
			mainView.frame = vf;

			NSWindow *win = mainView.window;
			if (win) {
				NSRect wf = win.frame;
				wf.size.width = designBoxWidth;
				[win setFrame:wf display:YES];
			}
			return;
		}
	}

	/* Sequoia: host gave us more space — add margins and stretch. */
	CGFloat margin = 15.0;
	CGFloat boxWidth = viewWidth - 2 * margin;
	CGFloat delta = boxWidth - designBoxWidth;

	for (NSView *subview in mainView.subviews) {
		NSRect f = subview.frame;
		if ([subview isKindOfClass:[NSBox class]]) {
			f.origin.x = margin;
			f.size.width = boxWidth;
			subview.frame = f;
			/* Force contentView to match new box size */
			NSView *content = [(NSBox *)subview contentView];
			NSSize contentMargins = [(NSBox *)subview contentViewMargins];
			NSRect cr = content.frame;
			cr.size.width = boxWidth - 2 * contentMargins.width - 2;
			content.frame = cr;
			CGFloat contentWidth = cr.size.width;
			CGFloat rightPad = 10.0;
			CGFloat midpoint = designBoxWidth / 2.0;
			for (NSView *child in content.subviews) {
				NSRect cf = child.frame;
				/* Skip small "0" indicator labels — position them later */
				if ([child isKindOfClass:[NSTextField class]] && cf.size.width < 30)
					continue;
				if (cf.origin.x > midpoint) {
					/* Right-side element: shift */
					cf.origin.x += delta;
				} else if (cf.origin.x + cf.size.width > midpoint + 50) {
					/* Wide element spanning most of width: stretch */
					cf.size.width += delta;
				}
				/* Clamp right edge so controls don't touch the border */
				CGFloat rightEdge = cf.origin.x + cf.size.width;
				if (rightEdge > contentWidth - rightPad) {
					cf.size.width = contentWidth - rightPad - cf.origin.x;
				}
				child.frame = cf;
			}
			/* Position "0" indicator labels at the zero point of their slider */
			for (NSView *child in content.subviews) {
				if (![child isKindOfClass:[NSTextField class]]) continue;
				NSRect cf = child.frame;
				if (cf.size.width >= 30) continue;
				for (NSView *other in content.subviews) {
					if (![other isKindOfClass:[NSSlider class]]) continue;
					NSRect sf = other.frame;
					if (fabs(sf.origin.y - cf.origin.y) > 30) continue;
					/* Found the associated slider — compute zero position */
					NSSlider *slider = (NSSlider *)other;
					double minVal = slider.minValue;
					double maxVal = slider.maxValue;
					double zeroFrac = (0.0 - minVal) / (maxVal - minVal);
					CGFloat knob = slider.knobThickness;
					CGFloat trackStart = sf.origin.x + knob / 2.0;
					CGFloat trackLen = sf.size.width - knob;
					cf.origin.x = trackStart + trackLen * zeroFrac - cf.size.width / 2.0 + 3.0;
					child.frame = cf;
					break;
				}
			}
		} else if (f.size.width > 400) {
			/* Full-width text field (title, version) */
			f.origin.x = margin;
			f.size.width = boxWidth;
			subview.frame = f;
		} else if (f.origin.x > viewWidth * 0.5) {
			/* Right-side control (Volume label, knob) */
			f.origin.x += delta;
			subview.frame = f;
		}
	}

	inAdjustLayout = NO;
}

- (void) mainViewFrameChanged:(NSNotification *)note
{
	[self adjustLayout];
}

- (void) didSelect
{
	[super didSelect];
	[self adjustLayout];
}

- (void) willSelect
{
	[super willSelect];
	if (currentService < 0) {
		NSRunCriticalAlertPanel(NSLocalizedString( @"Error", "MsgBox"),
								NSLocalizedString( @"No VoodooHDA Devices Detected", "MsgBoxBody" ), nil, nil, nil );
		disableViewRecursive([self mainView]);
		return;
	}

	currentChannel = 0U;

	if(![self updateSliders])
		goto failure;

	if (![self populateSelector])
		goto failure;

	[versionText setStringValue:@"Loaded"];

	return;

failure:
	[versionText setStringValue:@"ERROR"];
}

- (void) dealloc
{
	[[NSNotificationCenter defaultCenter] removeObserver:self];
	if (chInfo) {
		free(chInfo);
		chInfo = 0;
	}
	if (services) {
		services = nil;
	}
}

@end
