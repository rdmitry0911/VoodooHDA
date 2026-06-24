# AppleHDA unsolicited-response dispatch — invariant for ДНД-bug fix

Source-of-truth for the analog switching path, derived from Ghidra
decompilation of `AppleHDA.kext/Contents/MacOS/AppleHDA` (Sequoia-era
binary obtained from `MyKextInstaller` 1.8 release).  Tahoe KDK no
longer ships AppleHDA — Apple's modern analog stack is Apple Silicon
I²S, and Intel HDA codecs are no longer supported in-tree on Apple
hardware — so the latest x86_64 AppleHDA available for reference is
the Sequoia-era kext.

## 1. Methodology

Same Ghidra headless pipeline as for AppleGFXHDA:

- Imported 4 binaries (`AppleHDA`, `AppleHDAController`,
  `AppleHDAHALPlugIn`, `AppleHDAHardwareConfigDriver`) into a fresh
  project `audio_AppleHDA`.
- Decompiled the unsol-handling functions and key engine lifecycle
  hooks (`/tmp/applehda_decomp.c`, `/tmp/applehda_more_decomp.c`).
- Dumped all 186 vtables (`/tmp/applehda_vtables.txt`).
- Itanium-ABI +0x10 vtable-base correction applied as before.

Note: the Ghidra decompiler binary on the build host had been
patched by an experiment and crashed on every function.  The
backup `decompile.pre-intrafunction.orig` (Ghidra-stock build)
was restored and works correctly — recorded here so future
re-runs do not get stuck.

## 2. The unsol-handling pipeline Apple uses

```
AppleHDADriver::handleUnsolicitedResponsePinSenseCacheSupport(tag, resp)
  ├─ OSIncrementAtomic(this+0x38)                    ; reentrancy refcount
  ├─ if iVar2 == 0 (first entry) AND tag is in the
  │   special-tag bitmask 0x80200000002fe:
  │     │   The bitmask encodes specific monitored tags (bits set =
  │     │   tags Apple expects to receive — exact set varies by
  │     │   codec/layout, but {1..7, 9, …} are always included).
  │     ├─ vtable(this+0x2c)+0x328()                ; PinSense cache refresh
  │     └─ set bVar1 = true
  ├─ (**vtable+0xb70)(this, resp, ...)               ; ALWAYS dispatch
  │     →  this is AppleHDADriver::handleUnsolicitedResponse
  ├─ OSDecrementAtomic(this+0x38)
  ├─ if bVar1: (**vtable+0xb18)(this)                ; post-action
  └─ return
```

**The single most important invariant**: regardless of the response
payload, regardless of which flag bits are set in `resp`, the wrapper
**ALWAYS** dispatches to `handleUnsolicitedResponse` (the real
handler).  The conditional path (cache refresh + post-action) is for
specific *tags*, not specific *response bits*.

`handleUnsolicitedResponse` is then a large tag-driven switch (see
`/tmp/applehda_more_decomp.c`).  It maps each known tag to a
specific operation — pin retask, sink-device sync, MikeyEngine
construction, format change, engine dispatch.  But it **does not**
gate any of those operations on `resp & 0x01` (presence-change bit).

## 3. Our 3.0.5 behavior (correct)

Equivalent dispatch in `VoodooHDADevice::handleUnsolicited`:

```c
case HDAC_UNSOLTAG_EVENT_HP:   // tag == 0
    switchHandler(funcGroup, false);
    break;
```

Every unsol event with the configured tag (= 0 for all pins in 3.0.5)
unconditionally re-ran `switchHandler`, which scanned every pin and
re-applied mute/pin.ctrl state from a fresh `GET_PIN_SENSE` read.
Idempotent.  Matches Apple's structural rule "always dispatch".

## 4. Our 3.3.5 regression (the ДНД bug)

3.3.5 reworked `switchInit` to register each pin with a per-pin tag
(`nid & 0x3f`) and added a tag-aware dispatcher in
`handleUnsolicited`:

```c
if (tag != HDAC_UNSOLTAG_EVENT_HP) {
    Widget *src = find_pin_by_tag(tag);
    if (isHDMIorDP) {
        re-read sense + ELD for src
    } else {
        /* Analog jack: presence change → HP redirect path. */
        if (flags & 0x01)              // <-- regression
            switchHandler(funcGroup, false);
    }
    return;
}
```

The new `if (flags & 0x01)` gate is **a structural error** vs. both
Apple and 3.0.5.  Some codecs (or some codec-event sequences) emit
analog-pin unsol events with `flags & 0x01 == 0` — typically as a
side effect of `SET_PIN_WIDGET_CTRL` / `SET_CONV_STREAM_CHAN` /
`SET_AMP_GAIN_MUTE` issued during channel start/stop on the OTHER
analog output during user-initiated output switching via the
System Settings UI.  In 3.0.5 these still triggered the full
`switchHandler` re-scan.  In 3.3.5 we silently drop them.

### Symptom mapping

Slice's reproducer:

1. **Boot, Speakers active** — initial `switchInit(first=true)`
   sets up mute / pin.ctrl based on current jack state.
2. **UI switch: Speakers → Headphones** — IOAudio stops Speakers
   engine, starts Headphones engine.  Codec emits a side-effect
   unsol on one of the pins.  3.3.5 receives it with
   `flags & 0x01 == 0` and drops it.  But because this is the
   first switch and Headphones engine pumps audio through its own
   pin/DAC pair, sound still comes out — the stale state hasn't
   yet broken anything visible.
3. **UI switch: Headphones → Speakers** — codec emits another
   side-effect unsol, again dropped.  The pin/mute state from the
   stale (now twice-stale) initial setup is wrong for the current
   active engine.  Result: **all outputs silent until reboot.**

The asymmetry "1st switch OK, 2nd kills" is consistent with two
silently-dropped unsol events accumulating into broken state.

## 5. The fix

Remove the `flags & 0x01` gate.  Restore 3.0.5 / Apple-equivalent
"always dispatch":

```c
} else {
    /* Analog jack: ALWAYS dispatch switchHandler — matches AppleHDA
     * and 3.0.5.  switchHandler is idempotent: it re-reads
     * GET_PIN_SENSE per verb and rewrites mute/pin.ctrl from that.
     * Calling more often = no-op.  Calling less often = silent
     * routing corruption. */
    switchHandler(funcGroup, false);
}
```

Applied at `VoodooHDADevice.cpp::handleUnsolicited` analog branch.

## 6. Related fix: recursive EDID search

While AppleHDA itself doesn't program EDID (that's the framebuffer
stack), Slice independently flagged that our `readEDID` on the
HDMI side bounded the IORegistry walk at depth 2 — but on his
Polaris + Tahoe stack the `IODisplay` node carrying
`IODisplayEDID` lives at depth 3 (extra `IOAccelDisplayPipe…`
wrapper).  Replaced the manual two-level loop with
`IORegistryIterator(kIORegistryIterateRecursively)` bounded by an
explicit iteration cap.  Now finds EDID regardless of stack depth.

## 7. References

- `/tmp/applehda_decomp.c` — Ghidra decompile of the unsol path
  functions in AppleHDA (key: `handleUnsolicitedResponsePinSenseCacheSupport`)
- `/tmp/applehda_more_decomp.c` — `handleUnsolicitedResponse`,
  `dispatchStatelessTagToEngines`, `engineForUnsolicitedTag` —
  the actual tag-driven dispatch table
- `/tmp/applehda_vtables.txt` — AppleHDA + plugins vtable dumps
  (186 classes total)
- AppleHDA.kext source: `MyKextInstaller` 1.8 release —
  https://github.com/Mirone/MyKextInstaller/releases/download/1.8/AppleHDA.kext.zip
- `traditional` branch of `CloverHackyColor/VoodooHDA` for the
  3.0.5 reference behavior (handleUnsolicited unconditional dispatch)
