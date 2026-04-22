# HDMI Diagnostic Guide

This guide is for the debug-only HDMI/DP diagnostic controls exposed by the `VoodooHDA` debug driver and debug `VoodooHDA.prefPane`.

The diagnostic controls live on the `Debug` pane in the PrefPane and are available only when both conditions are true:
- the installed `VoodooHDA.kext` was built with `VOODOO_HDA_DEBUG_BUILD=1`
- the installed `VoodooHDA.prefPane` was built with `VOODOO_HDA_DEBUG_BUILD=1`

## What The Tools Are For

The debug controls split the HDMI playback path into smaller pieces so a single test run can show where the failure lives:
- DMA ring / BDL / GPU readout
- software buffer service
- clip / format conversion
- legacy Voodoo DSP path
- erase / overwrite path

The current controls are:
- `Enable diagnostic mode`
- `Inject tone in mix buffer`
- `Inject tone direct to sample buffer`
- `Prime full DMA buffer on start`
- `Freeze buffer after first fill`
- `Skip eraseOutputSamples`
- `Bypass Voodoo processing`
- `Skip framebuffer ELD`
- `Force any-framebuffer ELD`
- `Force ATI ELD verbs`
- `Skip framebuffer audio pipe`
- `Dump GPU AZ/MMIO on stream`
- `Force standard HDA/DIP path`
- `Force ATI vendor HDMI path`
- `Verbose logging`

`Inject tone direct to sample buffer` has priority over `Inject tone in mix buffer`.

## Recommended Test Order

Use the same HDMI/DP playback channel for all tests.

### 1. Transport And DMA Baseline

Enable:
- `Enable diagnostic mode`
- `Inject tone direct to sample buffer`
- `Prime full DMA buffer on start`
- `Freeze buffer after first fill`

Expected result:
- a stable sine tone should play
- tone pitch follows sample rate
- left/right channel behavior follows the selected format if the hardware path is asymmetric

Interpretation:
- if this fails, the problem is below the normal audio engine fill path
- suspect DMA ring geometry, BDL programming, stream start, HDMI transport, or hardware-specific HDMI behavior

### 2. Buffer Service Without Rewrites

Disable:
- `Freeze buffer after first fill`

Keep enabled:
- `Enable diagnostic mode`
- `Inject tone direct to sample buffer`
- `Prime full DMA buffer on start`

Expected result:
- sine still plays, now with the buffer being serviced repeatedly

Interpretation:
- if step 1 works but this fails, the likely fault is in buffer servicing cadence or overwrite timing

### 3. Erase Path Check

From step 2, enable:
- `Skip eraseOutputSamples`

Interpretation:
- if audio becomes stable only with `Skip eraseOutputSamples`, the driver is likely erasing data that has not yet been played

### 4. Clip And Conversion Check

Disable:
- `Inject tone direct to sample buffer`

Enable:
- `Inject tone in mix buffer`

Keep:
- `Enable diagnostic mode`

Interpretation:
- if direct injection works but mix injection fails, the fault is above DMA and below the client stream
- suspect `clipOutputSamples()`, format conversion, sample packing, frame offset math, or clip-position handling

### 5. Legacy Voodoo Processing Check

From step 4, enable:
- `Bypass Voodoo processing`

Interpretation:
- if the signal becomes clean only when this is enabled, the corruption is inside the legacy Voodoo processing path
- suspect boost, stereo enhancement, or other in-place sample processing

### 6. Runtime Logging

Use `Verbose logging` only while reproducing the fault.

In current debug builds, the extra HDMI, ELD and framebuffer diagnostics are also routed through this runtime log level. Keep it at `Level 0` for normal use, even with the debug driver installed.
The saved settings loader now restores debug builds with `Verbose logging = Level 0` by default, so noisy field captures do not remain enabled after reboot or reinstall.

Recommended usage:
- start from `Level 0`
- use `Level 1` or `Level 2` for normal field logs
- use higher levels only for short captures, because they add log noise and timing pressure

### 7. ELD Source Check

Start from normal playback, without tone injection, and enable one option at a time:
- `Skip framebuffer ELD`
- `Force any-framebuffer ELD`
- `Force ATI ELD verbs`

Interpretation:
- if playback works only with `Skip framebuffer ELD`, the injected framebuffer ELD is likely wrong for this sink or pin mapping
- if playback works only with `Force any-framebuffer ELD`, the exact framebuffer-to-pin match is wrong, but another connector already has usable ELD
- if playback works only with `Force ATI ELD verbs`, the framebuffer ELD path is the broken branch and the ATI verb path is healthier on this card

### 8. Audio Pipe Check

Enable:
- `Skip framebuffer audio pipe`

Interpretation:
- if nothing changes, the framebuffer audio pipe enable path is probably not the root cause
- if the behavior changes sharply, the Apple framebuffer `kConnectionEnableAudio` path is part of the failure

### 9. HDMI Programming Path Check

Use normal playback and try:
- `Force standard HDA/DIP path`
- `Force ATI vendor HDMI path`

Interpretation:
- if only `Force standard HDA/DIP path` works, the ATI vendor verb path is the suspect
- if only `Force ATI vendor HDMI path` works, the standard HDA DIP path is the suspect
- if both fail the same way, the failure is likely below the final InfoFrame programming branch

### 10. GPU MMIO Snapshot

Enable:
- `Dump GPU AZ/MMIO on stream`

Use this only while reproducing the fault.

Interpretation:
- the driver will dump the selected GPU register table and current AZ/AFMT/DP state around stream setup
- this is intended to compare working vs failing cards and verify that the driver selected the expected Polaris/Vega MMIO table

## Fast Diagnosis Matrix

`Direct tone + prime + freeze` works:
- HDMI transport and static DMA playback are alive

`Direct tone + prime + freeze` works, but removing `freeze` breaks playback:
- repeated buffer service or overwrite timing is broken

`Direct tone` works, `Mix tone` fails:
- clip / conversion / sample layout path is broken

`Mix tone` works only with `Bypass Voodoo processing`:
- legacy Voodoo DSP path is corrupting samples

`Mix tone` or `Direct tone` works only with `Skip eraseOutputSamples`:
- the erase path is clearing live audio data

Playback changes only with `Skip framebuffer ELD` or `Force ATI ELD verbs`:
- the sink-data / ELD branch is wrong

Playback changes only with `Skip framebuffer audio pipe`:
- the framebuffer audio-pipe enable path is involved

Playback changes only with `Force standard HDA/DIP path` or `Force ATI vendor HDMI path`:
- the final HDMI programming branch is wrong

Nothing works, even with direct tone:
- the fault is below the software fill path

## Practical Logging Notes

When collecting a field log, always include:
- driver commit id shown in the driver log
- selected channel name and whether it is `HDMI` or `DP`
- selected diagnostics path for ELD (`framebuffer`, `any-framebuffer`, `ATI verbs`, or `skip framebuffer`)
- selected HDMI programming path (`auto`, `standard`, or `ATI vendor`)
- sample rate
- bit depth / format
- the exact diagnostic flags used
- whether the test file was short or long

For short-file glitches, note specifically:
- whether playback continued after the file ended
- whether progress in the PrefPane moved
- whether the sound was silence, clicks, burst, or continuous tone

## Scope

These tools are intended for HDMI/DP fault isolation first. They can also be used on analog and SPDIF paths, but the most useful interpretation today is for digital playback.
