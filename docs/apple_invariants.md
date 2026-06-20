# Apple AppleGFXHDA HDMI/DP audio invariants

Source-of-truth for the Apple-aligned rewrite of our HDMI/DP path. Every
claim is backed by a citation into Ghidra's decompile of
`AppleGFXHDA.kext/Contents/MacOS/AppleGFXHDA` extracted from KDK
26.3 (macOS Tahoe 26.3 kernel debug kit). The decompile lives at
`docs/audio_stack_decompiled/AppleGFXHDA_decompiled.c`.

This is a clean-room *specification of behavior*. It is not a port
of Apple's code: we restate the invariants in our own terms so we can
reimplement the HDMI path in our GPL/BSD codebase without copying any
of Apple's source.

## 1. Methodology

- Vtables were dumped from the binary's `__ZTV...` symbols (Itanium ABI).
  All ~200 vtables, ~1200 method-pointers per class, are in
  `/tmp/apple_decompile/apple_vtables.txt` on the build host (dump
  script: `dump_vtables_jython.py`).
- Decompile vtable calls of the form `(**(code **)(*this + 0xN))(...)`
  were resolved by `tools/resolve_vtables.py` (also locally cached) to
  the actual method name. **Key correction**: per Itanium ABI the
  `__ZTV<class>` symbol points at vtable[-2] (top-offset slot); the
  vptr in the object header points at vtable[0]. Therefore code-side
  offset `0xN` corresponds to symbol-relative offset `0xN + 0x10`.
- Where a call lands on `___cxa_pure_virtual` in the base class, the
  actual target is whichever override the concrete leaf class
  (`AppleGFXHDAEngineOutput`, `AppleGFXHDAEngineOutputDP`, …) defines
  for that slot. The resolved file annotates the base, but for the
  output-path flows the leaf override is what runs.
- Comparison against our 3.3.5 code uses `tranc/VoodooHDADevice.cpp`,
  `tranc/VoodooHDAEngine.cpp`, `tranc/VoodooGFXHDA.cpp`.

## 2. Class hierarchy and terminology

| Apple (AppleGFXHDA.kext) | Our (tranc/) | Role |
|---|---|---|
| `AppleGFXHDAController : IOService` | `VoodooHDADevice` + `VoodooGFXHDAController` | per-PCI-function HDA controller — owns MMIO, CORB/RIRB, codec scan, BDL allocation, stream multiplexing |
| `AppleGFXHDAEngine : IOAudioEngine` | `VoodooHDAEngine : IOAudioEngine` | per-DAC IOAudio engine — performAudioEngineStart/Stop, clip/erase, timestamps |
| `AppleGFXHDAEngineOutput : AppleGFXHDAEngine` | (no analog) | output-specific overrides (HDMI/DP path) |
| `AppleGFXHDAEngineOutputDP : AppleGFXHDAEngineOutput` | (no analog) | DP-specific overrides (InfoFrame layout, etc.) |
| `IOGFXHDAStream` | `Channel` (C struct) | per-hardware-stream descriptor (offset register set, BDL memory, format) |
| `AppleGFXHDAStream : IOGFXHDAStream` | (folded into Channel) | adds Apple-side accounting (active flag, position-state) |

Apple's per-stream object (`AppleGFXHDAStream`) carries register
offset, current SDCTL state, BDL physaddr, format register value,
and a small state machine (`STATE_IDLE=0, STATE_PROGRAMMED=?,
STATE_RUNNING=1, STATE_STOPPING=2, STATE_STOPPED=3`). Ours uses
`Channel.flags & HDAC_CHN_RUNNING` (one bit) which is structurally
weaker.

## 3. The `performAudioEngineStart` flow

Apple source (resolved): `AppleGFXHDA_resolved.c` @ line 21836,
binary offset `0x1e3ee`. Reformatted with resolved method names:

```c
int AppleGFXHDAEngine::performAudioEngineStart() {
    // (1) Guard: a path-set must be selected, and the controller must
    //     still be attached. Either failure → kIOReturnNotAttached.
    PathSet *ps = this->getSelectedPathSet();        // vtable+0xc78
    if (ps == NULL || this->mController == NULL)
        return kIOReturnNotAttached;                 // 0xe00002bc

    // (2) Power gating: if we're in a transitional power state and
    //     mismatched against the engine's expected state, raise to
    //     active. Failure → goto fail.
    uint state = this->engineState;
    if ((this->powerStateRaw & ~1u) == 2 && this->powerStateRaw != state) {
        if (this->setPowerStateToActive() != 0)     // vtable+0xd68
            goto fail;
        state = this->engineState;
    }

    // (3) Reject if engine state ∈ {0,1,2,3} (transitional / not idle-ready).
    //     `state - 4 < 0xfffffffe` is the decompiled idiom for that test.
    if (state - 4 < 0xfffffffe)
        return kIOReturnNotReady;                   // 0xe00002d8

    // (4) Clear the start-counter at this->[0x1ec].
    this->startCounter = 0;

    // (5) Compute the clock period in nanoseconds:
    //         framePeriodNs = framesPerBuffer * 1e9 / sampleRate
    uint frames = this->IOAudioEngine::getNumSampleFramesPerBuffer(); // vtable+0xb58
    this->framePeriodNs = ((u64)frames * 1000000000ULL) / this->sampleRate;

    // (6) Mark "starting" / "running" *before* the DMA actually goes.
    //     The interrupt handler relies on these flags to dispatch.
    this->isStartingFlag = 1;
    this->engineRunning  = 1;

    // (7) Drive the hardware.  Logs "Calling startDMAEngine from %s"
    //     against this->callerName for kdebug traceability.
    int err = this->startDMAEngine();               // vtable+0xc58

    // (8) Reset the per-run position counters AFTER startDMAEngine.
    //     [0x6e] = running offset; [0x6d] = last wrap point sync.
    this->positionCounter = 0;
    this->lastWrap        = this->wrapPoint;

    // (9) Compute the wall-clock anchor.  _clock_get_uptime() yields
    //     current AbsoluteTime; nanoseconds_to_absolutetime converts.
    AbsoluteTime now;
    _clock_get_uptime(&now);

    // (10) Sample position seed: ask the controller for SDLPIB/DPIB.
    this->getCurrentSamplePosFromSource(...);       // vtable+0xc38

    // (11) Optional kdebug trace.
    if (kdebug_enable & ~8u) _kernel_debug(...);

    // (12) Anchor the engine's loop timestamp.  This is the IOAudio
    //      contract: after takeTimeStamp(), getLoopCountAndTimeStamp()
    //      returns deterministic values.
    this->takeTimeStamp();                          // vtable+0xaf0

    // (13) Post-start branch — output-leaf-class override decides
    //      whether to return immediately or run deferred work.
    if (this->postStartCheck()) return err;         // vtable+0xc70 (output override)
    if (this->performDeferredWork() == 0) return err; // vtable+0xd90 (output override)

fail:
    IOLog("...");
    return err;
}
```

### Key invariants

| # | Invariant | Why |
|---|---|---|
| 3.1 | A path-set MUST be selected before starting. | Path-set encodes pin→DAC routing; without it the BDL points nowhere meaningful. |
| 3.2 | Engine state is rejected if transitional. | Prevents racing a stop-in-progress; gives the previous tear-down time to complete. |
| 3.3 | `framePeriodNs` is computed BEFORE startDMAEngine. | The interrupt that runs on the first BCIS uses this period for timeline math. |
| 3.4 | `engineRunning = 1` BEFORE startDMAEngine. | Once RUN goes high, an interrupt can land immediately; the ISR fast-path checks this flag. |
| 3.5 | Position counters reset AFTER startDMAEngine. | If reset before, the first interrupt sees a stale wrap point and reports a phantom 1-buffer advance. |
| 3.6 | `takeTimeStamp()` is the LAST hardware-touching step. | Anchors the engine clock at the same moment the DMA was definitively running. NO `IODelay` or SDLPIB poll between startDMAEngine and takeTimeStamp. |
| 3.7 | `_clock_get_uptime()` (real wall clock), not a synthesized anchor. | Sample timing is computed against the host monotonic clock; the engine never invents a start time. |

### Our 3.3.5 deviations from §3

- **3.1**: no path-set abstraction. We rely on `Channel.pcmDevice` plumbed
  during association; functional gap only if a pin disappears mid-start.
- **3.2**: no engine-state machine. `HDAC_CHN_RUNNING` is the only bit.
- **3.3**: we never compute `framePeriodNs` — IOAudio default math.
- **3.4**: `HDAC_CHN_RUNNING |=` happens AFTER `streamReset` in
  `prepareStreamDMA` but the actual `RUN=1` write is much later in
  `startStreamRegisters`. We're in the right order *by accident*.
- **3.5**: we don't have per-engine position counters; we rely on SDLPIB
  reads. Matches Apple's late-reset only because we don't reset at all.
- **3.6**: we already do `takeTimeStamp` immediately after `channelStart`
  — correct. No spurious IODelay. ✓
- **3.7**: `takeTimeStamp(false)` lets IOAudio fetch the current
  AbsoluteTime itself — same source. ✓

## 4. `AppleGFXHDAController::startStream`

Apple source (resolved): `AppleGFXHDA_resolved.c` @ line 8899, binary
offset `0xd5d8`.

```c
IOReturn AppleGFXHDAController::startStream(StreamInfo *stream, uint flags) {
    // (1) First-activation path: bring controller out of CRST if this is
    //     the first active stream.
    if (stream->refCount == 0) {
        if (this->mController == NULL) {
            IOLog("controller gone");
            return kIOReturnNotAttached;             // 0xe00002bc
        }
        uint32_t gctl = read_GCTL();                  // FUN_00003284
        if (!(gctl & HDAC_GCTL_CRST)) {
            IORecursiveLockLock(this->mLock);
            int wasZero = OSIncrementAtomic(&this->activeStreamCount);
            if (wasZero == 0) {                       // controller idle → wake it
                read_status();
                write_GCTL(...);                      // assert CRST
            }
            IORecursiveLockUnlock();
        }
    }

    // (2) DRAIN-STOPPING gate: if the previous stop hasn't completed,
    //     poll up to 10000 × 1 µs = 10 ms for the global "stopping"
    //     status bit to clear before issuing a new RUN. This is the
    //     structural fix for "повторное переключение".
    uint32_t status = read_status();                  // FUN_000033e6
    if (stream->state == STATE_STOPPING && (status & STOPPING_BIT)) {
        int n = 10000;
        do {
            if (!(read_status() & STOPPING_BIT)) goto LAB_RUN;
            IODelay(1);                               // 1 µs
        } while (--n != 0);
        IOLog("startStream timeout");
        return kIOReturnTimeout;                      // 0xe00002d6
    }

LAB_RUN:
    // (3) Actual start sequence — atomic with respect to the controller:
    this->enableMaxBusStall();                        // vtable+0xc00 — pin PCI bus stall ceiling
    update_controller_state();                        // FUN_0000a55e
    write_INTCTL_set_bit(stream->streamId);           // FUN_000078a0(streamId, 1<<streamId)

    this->resetStream(stream);                        // vtable+0x8c0 — SRST set/ack/clear/ack
    this->programStream(stream);                      // vtable+0x8e8 — BDL+SDCBL+SDLVI+SDFMT+RUN=1
    this->enableStreamInterrupt(stream);              // vtable+0x8f0 — IOCE|DEIE bits
    this->validateBDLEntries(stream);                 // vtable+0x900 — empty, structural assertion

    final_register_write();                           // FUN_000078a0 — flush
    stream->state = STATE_RUNNING;                    // 1
    return kIOReturnSuccess;
}
```

### Key invariants

| # | Invariant | Why |
|---|---|---|
| 4.1 | First active stream brings controller out of CRST. | A late-arriving channel still works even if controller was idle. |
| 4.2 | The DRAIN-STOPPING poll is gated by `state == STOPPING && status & bit`. | Avoids spinning on the steady-state "not stopping" path; only pays the 10 ms cost when actually racing a stop. |
| 4.3 | `IODelay(1)` × 10000, not 10 ms in one shot. | Lets a faster drain return early. |
| 4.4 | Order: enableMaxBusStall → INTCTL → resetStream → programStream → enableStreamInterrupt → validateBDLEntries. | enableMaxBusStall must precede DMA arm so the link doesn't go into power-save mid-clip. INTCTL bit before SRST so a spurious post-reset interrupt isn't lost. SRST drains hardware completely. programStream sets RUN=1. interrupt-enables come AFTER RUN to avoid racing the first BCIS. validateBDLEntries is the (empty) post-condition. |
| 4.5 | `validateBDLEntries(StreamInfo*)` is **empty**. | Apple's invariant: BDL geometry is correct by construction — there is nothing to validate at runtime. (Source: `validateBDLEntries @ 0xde4c` decompiles to `{ return; }`.) |
| 4.6 | `state` transitions: only at very end, after all hardware operations succeed. | Crash/early return keeps `state` in its prior value so cleanup paths work. |

### Our 3.3.5 deviations from §4

- **4.1**: We bring the controller out of reset at device probe, not
  lazily per-stream. Same effect, different timing — OK.
- **4.2 + 4.3**: **CLOSED by `commit 472288c`.** Initially we thought
  Apple's gate was a controller-wide status bit and ours (per-stream
  RUN) might be functionally narrower. The disassembly resolution
  in §12-Q1 shows Apple's gate also reads per-stream `SDCTL.RUN`
  (offset `stream_off + 0x80`, mask `0x2`), with the only meaningful
  difference being that Apple gates the poll on a software state-
  machine check (`state == STOPPING`). Functionally equivalent.
- **4.4**: Our `channelStart` flow is
  `prepareStreamDMA → streamSetup → startStreamRegisters → updateTiming`.
  `prepareStreamDMA` does stop+SRST+bzero+setupBdl+setStreamId in one
  shot. `streamSetup` programs SDFMT. `startStreamRegisters` sets
  INTCTL + clears SDSTS + writes SDCTL with RUN|IOCE|FEIE|DEIE *in
  one register write*. **We collapse Apple's separate programStream
  and enableStreamInterrupt into a single SDCTL byte-write.** This is
  semantically equivalent on x86 (the byte write is atomic), but it
  means we don't have the "RUN is on, interrupts are off, observe DMA
  starting cleanly" window Apple has.
- **4.5**: **STRUCTURAL MATCH.** Our `commit 472288c` set
  `slack = 0` on the digital path so `setupBdl` emits uniform-size
  entries. We now match the precondition that makes Apple's
  `validateBDLEntries` a no-op.
- **4.6**: We don't have a state machine to maintain.

## 5. `AppleGFXHDAController::programStream`

Apple source (resolved): `AppleGFXHDA_resolved.c` @ line 9053, binary
offset `0xda0c`. Note: many of the vtable calls here go through
`stream->internalObject` (a child object at `StreamInfo+0x20`),
typically the `AppleGFXHDAStream` that owns the BDL IODMACommand.

```c
IOReturn AppleGFXHDAController::programStream(StreamInfo *stream) {
    if (stream->state != STATE_IDLE) {
        IOLog("programStream wrong state");
        return kIOReturnNotReady;                   // 0xe00002e9
    }

    // (1) Build the SDCTL2-style header word: streamId << 20.
    //     For OUTPUT type==2 with sub-flag==1: OR-in DIR bit (0x80000).
    uint32_t hdr = (stream->streamId & 0xf) << 20;
    if (stream->type == 2 && stream->subType == 1) hdr |= 0x80000;
    write_SDCTL2(stream, hdr);                      // FUN_000078a0
    uint32_t rb = read_SDCTL2(stream);
    if ((rb ^ hdr) & 0xfb0000) return kIOReturnIOError;   // 0xe00002e9

    // (2) Write SDFMT (sample format) and read back: verify bits [14:0] match.
    write_SDFMT(stream, stream->formatWord, 0x7f7f); // FUN_00008d30
    uint16_t fmt_rb = read_SDFMT(stream);            // FUN_00003334
    if ((fmt_rb ^ stream->formatWord) & 0x7f7f) return kIOReturnIOError;

    // (3) Program BDL via stream child object: writes BDL physaddr,
    //     SDCBL (cyclic buffer length), SDLVI (last valid index).
    stream->internalObject->programBDL();           // *(stream+0x20)->vtable+0x2e8

    // (4) Final SDCTL write — this is where RUN=1 is set.
    write_SDCTL_RUN_bit(stream);                    // FUN_000078a0
    write_SDCTL_post();                              // FUN_00008d74
    write_SDCTL_extra();                             // FUN_000078a0 × 2

    IOReturn err = kIOReturnSuccess;

    // (5) Optional dmaPos enable for codecs that report DMA position
    //     via a coherent shared page.
    if (this->hasDmaPos && this->enableDmaPos) {
        uint32_t dmaPosOff = this->dmaPosOffsets[stream->streamId];
        if (dmaPosOff != 0) {
            write_DPIB(stream, dmaPosOff | DPIB_ENABLE);  // 0x4000
            read_status();
            write_SDCTL_kick();
            // Wait up to 3 ticks for the dmaPos to start updating.
            for (int i = 3; i > 0; i--) {
                if (!(read_status() & DMAPOS_BUSY)) goto LAB_OK;
            }
            err = kIOReturnIOError;
        }
    }

LAB_OK:
    // (6) Stash the first BDL physaddr back into the controller's lookup table.
    if (stream->iomemBdl != NULL && stream->streamId < 0x40) {
        IOPhysicalAddress pa = stream->iomemBdl->getPhysical();
        this->bdlPhysAddrTable[stream->streamId] = pa;
    }
    return err;
}
```

### Key invariants

| # | Invariant | Why |
|---|---|---|
| 5.1 | SDCTL2 header (streamId + DIR) is read-back-verified bits [23:16]. | Catches MMIO faults early; the codec link won't accept a wrong stream tag silently. |
| 5.2 | SDFMT is read-back-verified bits [14:0]. | Format mismatch is the #1 cause of squarewave/buzz on HDMI. Apple refuses to start the stream if the readback doesn't match the request. |
| 5.3 | BDL programming is delegated to the stream child object. | Per-stream BDL state lives on the stream, not the controller. |
| 5.4 | dmaPos enable has a 3-iteration drain wait. | Without it, the first DPIB read returns 0 even though hardware is fine. |
| 5.5 | Final stash of BDL physaddr happens AFTER programming, indexed by streamId. | The ISR's fast path reads this table to translate a stream-index back to a BDL pointer without re-traversing the stream list. |

### Our 3.3.5 deviations from §5

- **5.1 + 5.2**: **CLOSED by `commit 80eed10`.** Read-back verification
  added in `channelSetFormat`, `streamSetId` (legacy), and `setStreamId`
  (GFX), each masked to the spec-significant bits (`0x7f7f` for SDFMT,
  `STRM_MASK` for SDCTL2 stream tag). Log-only, not fail-on-mismatch —
  see commit message rationale for why we don't bail like Apple does.
- **5.3**: We program BDL in `setupBdl` directly on the controller
  with no per-stream object. Functional equivalent.
- **5.4**: **CLOSED by `commit 80eed10`.** Added `IODelay(30)` after
  enabling DPIB in both the legacy (`bdlSetup`) and GFX (`setupBdl`)
  paths to settle Apple's "DPIB warm-up" window before any read.
- **5.5**: We use `channelGetPosition` which always re-reads SDLPIB;
  no cached translation table. Slightly slower in the ISR but
  correct.

## 6. SDCTL register manipulation invariants

From the resolved decompiles of `programStream`, `startStream`,
`stopStream` and the `AppleGFXHDAStream` overrides:

| # | Invariant | Why |
|---|---|---|
| 6.1 | SDCTL config bits (RUN | IOCE | DEIE | FEIE) are written via a clear-before-set: `ctl &= ~(RUN | IOCE | DEIE | FEIE); ctl |= new_bits;` | Eliminates the case where a residual bit from a half-stopped run survives the `|=`. |
| 6.2 | SDCTL.RUN is set in `programStream`. Interrupt-enable bits (IOCE | DEIE) are set in `enableStreamInterrupt`, AFTER RUN. | Lets the hardware DMA settle before the first BCIS can fire and dispatch an interrupt that the engine isn't yet ready to handle. |
| 6.3 | SDCTL.FEIE is ENABLED. | FIFO errors are diagnosable; suppressing FEIE (as mald0n's 4b43a2df does) hides genuine FIFO underruns. |
| 6.4 | SDCTL.STRIPE is set in SDCTL2, not SDCTL0. | The two registers have different fields. Striping is a higher-level multi-link feature. |
| 6.5 | SDSTS sticky bits (DESE | FIFOE | BCIS) are cleared by writing-1-to-clear BEFORE arming the stream. | A previous run's leftover BCIS would trigger a spurious immediate interrupt. |

### Our 3.3.5 status on §6

- **6.1**: After `commit 472288c`, our `startStreamRegisters` does
  clear-before-set. ✓
- **6.2**: We set RUN and IOCE|DEIE|FEIE in the same byte write. As
  noted in §4, the byte write is atomic on x86 so there is no real
  race, but Apple's separation provides a brief observation window
  that has diagnostic value. Low priority to change.
- **6.3**: FEIE is enabled. ✓
- **6.4**: SDCTL2 stripe handling matches. ✓
- **6.5**: We clear SDSTS sticky bits in `startStreamRegisters` after
  setting HDAC_CHN_RUNNING. Order matches Apple's. ✓

## 7. BDL invariants

| # | Invariant | Why |
|---|---|---|
| 7.1 | All BDL entries are the same length. | DMA engine on Polaris/Park measures wrap from BDL geometry; a short last entry produces a periodic glitch each wrap. |
| 7.2 | Buffer total length (SDCBL) is exactly `blockSize * numBlocks`. | Same reason as 7.1 — no fractional remainder. |
| 7.3 | `numBlocks >= 2`, `numBlocks <= 32`. | HDA 1.0a spec: SDLVI is 8-bit (≤255 BDL entries), but most controllers limit to 32. |
| 7.4 | `blockSize` is 128-byte aligned. | HDA spec; some controllers require greater alignment (Polaris: 4096). |
| 7.5 | The last BDL entry has IOC=1. | Triggers BCIS on wrap; engine's loop-count math depends on it. |
| 7.6 | BDL memory is page-aligned and contiguous physical. | Hardware reads BDL from physical address with no IOMMU translation on most paths. |
| 7.7 | DMA buffer is bzeroed on prepare and on stop. | Prevents wrap-replay of stale data when the producer pauses without resetting the stream. |

### Our 3.3.5 status on §7

- **7.1**: After `commit 472288c`, slack=0 on digital → uniform
  entries. ✓
- **7.2**: SDCBL formula in `VoodooGFXHDA.cpp:563` is
  `blockSize * numBlocks - slack`. With slack=0 → match. ✓
- **7.3 + 7.4 + 7.5 + 7.6**: ASSERTed in `initializeStreamDMA`. ✓
- **7.7**: bzero in both `prepareStreamDMA` and `stopStream`. ✓

## 8. Position tracking

From `AppleGFXHDAEngine::getCurrentSamplePosFromSource` @ `0x1e6ec`
(resolved):

```c
IOReturn getCurrentSamplePosFromSource(ControllerLinkPosSource src, u64 *outFrames) {
    *outFrames = 0;
    if (!this->mController || !this->mStreamInfo) return kIOReturnNotAttached;

    Controller *ctl = this->mStreamInfo->controller;
    IOReturn err;
    if (src == 0) {
        err = ctl->getLinkPositionFromSDLPIB();      // vtable+0xb58 — read SDLPIB
    } else {
        err = ctl->getLinkPositionFromDPIB();         // vtable+0xb60 — read DPIB shared memory
    }
    if (err == 0) {
        u64 bytesPerFrame = this->channels * this->bytesPerSample;
        u64 raw = *outFrames;
        u64 frames = raw / bytesPerFrame;
        *outFrames = frames;
        // Compare against engine's known last position. If decreasing
        // (wrap detected without engine being notified), reject as
        // unreliable and report 0.
        u32 last = this->getLastKnownFramePos();      // vtable+0xb58 (different override)
        if (frames < last) return kIOReturnNotAttached;
        *outFrames = 0;
        return kIOReturnNotAttached;
    }
    return kIOReturnNotAttached;
}
```

### Key invariants

| # | Invariant | Why |
|---|---|---|
| 8.1 | SDLPIB is read in bytes; the engine converts to frames by dividing by `channels * bytesPerSample`. | Hardware reports byte offset within the cyclic buffer. |
| 8.2 | Position is rejected if it goes backwards relative to last known. | An SDLPIB glitch (Polaris: known to briefly read stale) would otherwise cause the IOAudio clip pipeline to write erase-region into still-playing data. |
| 8.3 | DPIB (shared dmaPos memory) is preferred if available — it's coherent and doesn't have the SDLPIB-glitch problem. | DPIB updates from hardware on every byte, SDLPIB updates lazily. |

### Our 3.3.5 deviations from §8

- **8.1**: We do `position %= (blockSize*numBlocks - slack)` in
  `channelGetPosition` (`VoodooHDADevice.cpp:3131`) — same byte
  domain, but DOES NOT convert to frames. Conversion happens in
  IOAudio. Compatible.
- **8.2**: **CLOSED by `commit 80eed10`.** `voodooHDAGuardPosition()` in
  `Private.h` distinguishes a legitimate buffer wrap (last near end,
  raw near start, both within bufferBytes/8 tolerance) from a stale
  backward MMIO read (everything else). Glitch reads hold the prior
  position; a counter `Channel::diagnosticPositionRejects` records
  the catch for telemetry.
- **8.3**: **CLOSED by `commit 80eed10`** (DPIB warm-up wait, §5.4
  above). We still try `dmaPos` first and fall back to SDLPIB.

**This was the most likely structural cause of Сергей's crackle pattern.**
The "1s clean → crackle → 3–4 fading crackles" maps to: monotonic
position for ~1 buffer wrap, then a backward SDLPIB read causes
erase-into-future, the resulting click decays as the wrap consumes
the erroneously-zeroed region over subsequent wraps. With the
monotonicity guard in place the backward read is held instead of
forwarded to IOAudio, and the erase region stays aligned to the
real play head.

## 9. Timing and locking

| # | Invariant | Why |
|---|---|---|
| 9.1 | All controller register writes are protected by `IORecursiveLock`. | Multiple engines share one controller's MMIO. |
| 9.2 | The drain-stopping poll uses `IODelay`, not `IOSleep`. | Sleep would yield, allowing other engines to start/stop concurrently and breaking the state-machine invariant. |
| 9.3 | `takeTimeStamp` is called only inside the engine workloop. | IOAudio's timestamp queue assumes single-writer. |
| 9.4 | The ISR (`handleStreamInterruptOnISR`) defers heavy work to the workloop via `handleStreamInterruptOnWorkLoop`. | ISR runs at high IPL; clipping and erasing can hold the lock too long. |

### Our 3.3.5 status on §9

- **9.1**: We use `LOCK()`/`UNLOCK()` (PR_NORECURSE mutex). ✓
- **9.2**: We don't currently have a drain-stopping poll. (See §4.2.)
- **9.3**: `takeTimeStamp` called from `performAudioEngineStart`
  workloop. ✓
- **9.4**: Our `serviceInterrupt` runs at workloop level via
  `IOFilterInterruptEventSource`. Equivalent. ✓

## 10. Deviations summary, with priority

The full deviation table, after the systematic audit. New entries
(D8..D20) come from running `tools/ghidra/dump_call_offsets.py`
against the full set of controller and engine lifecycle functions,
plus the resolved decompiles of `requestBandwidth`,
`handleStreamInterruptOnISR`, and the stop-side flows.

| # | Deviation | Location | Severity | Status / Notes |
|---|---|---|---|---|
| D1 | No SDLPIB monotonicity guard | `VoodooHDADevice.cpp::channelGetPosition`, `VoodooGFXHDA.cpp::getLinkPosition` | **High** | **CLOSED** by `commit 80eed10`. Most likely root cause of "crackle after wrap" on AMD HDMI. |
| D2 | No DPIB warm-up wait after enable | `VoodooHDADevice.cpp::bdlSetup`, `VoodooGFXHDA.cpp::setupBdl` | **High** | **CLOSED** by `commit 80eed10`. Cold-start can return stale 0. |
| D3 | No drain-stopping gate at `startStream` entry | `VoodooGFXHDA.cpp::startStreamRegisters` | **Medium** | **CLOSED** by `commit 472288c` (per-stream RUN poll, matches Apple per §12-Q1). |
| D4 | No SDFMT/SDCTL2 read-back verification | `channelSetFormat`, `setStreamId` | **Medium** | **CLOSED** by `commit 80eed10` (log-only). |
| D5 | RUN + interrupt enables in one SDCTL write | `VoodooGFXHDA.cpp::startStreamRegisters:608-610` | Low | Atomic on x86. Same observation as D13 from different angle. |
| D6 | No engine state machine (only `HDAC_CHN_RUNNING`) | `Channel.flags` | Low | Structural cleanup. No current bug attributable. |
| D7 | No path-set abstraction | `Channel.pcmDevice` | Low | Fine for our configurations. |
| **D8** | `enableMaxBusStall` not called at stream start | none (would go in `channelStart` / `prepareStreamDMA`) | **High** | Apple's `startStream` calls `enableMaxBusStall` (`vtable+0xc00`) before `resetStream`/`programStream`. The implementation at `0x9614` is a refcounted wrapper around `IOService::requireMaxBusStall(N)`. Without it, the system PM can enter a sleep state that stalls PCI beyond the DMA controller's FIFO depth → underrun → crackle independent of any data-path bug. Matched on stop side by `disableMaxBusStall` (`vtable+0xc08`). |
| **D9** | `resetStream` uses RMW on SDCTL bit 0 (SRST) | `VoodooGFXHDA.cpp::resetStreamRegisters:657` | **Medium** | Apple's `resetStreamForOffset` (`0xd4c0`) writes the *full* SDCTL = `0x00000001` — only SRST set, everything else cleared. Our code does `ctl |= SRST` so RUN / IOCE / DEIE / FEIE survive into the SRST cycle. Per HDA 1.0a these bits MUST be 0 when SRST is asserted; we get away with it because we always pre-call `stopStreamRegisters` which clears them, but Apple's pattern is one fewer step and one fewer race. |
| **D10** | `INTSTS.SIS[streamId]` not cleared before `RUN=1` | `VoodooGFXHDA.cpp::startStreamRegisters` | **Medium** | Apple's `startStream` writes `1 << streamId` to `HDAC_INTSTS` (offset `0x24`) just before the SRST cycle, clearing any leftover pending interrupt for this stream. Without it, a stale BCIS from a prior run triggers a spurious immediate interrupt at start; the engine's first BCIS-handler invocation runs before `RUN` has actually advanced the buffer. We do clear `SDSTS` sticky bits (`DESE|FIFOE|BCIS`) but those are the *per-stream* status; `INTSTS.SIS` is the *controller-aggregated* pending bit. Different register, same hazard class. |
| **D11** | DPIB never disabled on last-stream stop | `VoodooHDADevice.cpp`, `VoodooGFXHDA.cpp` | Low | Apple's `stopStream` reads `HDAC_DPLBASE` (`0x70`), clears bit 0, writes back — but only when the per-stream refcount drops to 1 (last stream). We never disable DPIB once enabled. Probably benign: idle DPIB writes to a known-valid shared page. |
| **D12** | Vendor-specific SDCTL bit 5 not set on per-stream DPIB enable | `VoodooGFXHDA.cpp::setupBdl` | Low | Apple's `programStream` reads SDCTL, ORs `0x20` (bit 5, reserved per HDA 1.0a), writes back — gated on the controller's DPIB-enable flag. Likely a vendor-extension "per-stream DPIB enable" bit; Polaris/Park may not need it (our DPIB has been working without it). |
| **D13** | `enableStreamInterrupt` collapsed into the RUN write | `VoodooGFXHDA.cpp::startStreamRegisters` | Low | Apple splits the sequence into `programStream` (sets RUN + clears IOCE/DEIE/FEIE via SDCTL = config) → `enableStreamInterrupt` (sets IOCE/DEIE via INTCTL bit + SDCTL bit toggles). We do everything in one SDCTL byte write. Functionally equivalent on x86 (atomic byte write); diagnostic value to split is small. Same as D5 from the lifecycle angle. |
| **D14** | `requestBandwidth` not invoked at startDMAEngine / stopDMAEngine | `VoodooHDAEngine::performAudioEngineStart` / `Stop` | **High** | Apple's `startDMAEngine` (`0x1e8fc`) calls `AppleGFXHDAController::requestBandwidth(0, this, mode)` to register per-engine latency requirements with the controller, which then sends `kApplePrivateMessageBusy` / `kApplePrivateMessageIdle` upstream (probably to AGDC / framebuffer driver) so the GPU PM stays out of sleep states that would starve audio DMA. We don't have this negotiation at all. Sibling of D8 (D8 is the local PCI bus stall; D14 is the upstream graphics PM hint). |
| **D15** | No `kdebug_enable` tracing at entry/exit of audio-engine functions | engine + controller hot paths | Low | Apple emits `_kernel_debug` events from `performAudioEngineStart`, `performAudioEngineStop`, `resetStreamForOffset`, `handleStreamInterruptOnWorkLoop` etc. for system-wide trace correlation. We have IOLog-level diagnostics in some places, no kdebug. Pure diagnostic / profiling tooling, no audio correctness impact. |
| **D16** | No generic `pollRegister(bitmask, timeoutMs, expected)` helper | `VoodooGFXHDA.cpp::resetStreamRegisters` | Low | Apple's `resetStreamForOffset` delegates to a vtable+0x978 `pollRegister(mask, offset, expected)` helper. We inline the poll loops twice in `resetStreamRegisters`. Cosmetic. |
| **D17** | `performAudioEngineStop` unconditionally calls `channelStop` | `VoodooHDAEngine::performAudioEngineStop` | Low | Apple's `performAudioEngineStop` (`0x1e7e6`) only calls `stopDMAEngine` if `this->[0x2d] & 1` (engine-was-running flag). We always call `channelStop` even for an already-stopped engine. Extra register touches on a no-op path; defensive but harmless. |
| **D18** | No engine-side per-run position counter reset | `VoodooHDAEngine::performAudioEngineStop` | Low | Apple resets a swath of internal counters at engine stop (`this->[0x51..0x57]` — loop counts, last-wrap timestamps, etc.). We don't track those state fields at the engine level; our position state lives on the Channel struct and is reset on `performAudioEngineStart` via `resetDiagnosticState`. Functionally OK because IOAudio's position state is reset by `resetClipPosition`. |
| **D19** | No per-stream FIFO Error / Descriptor Error counter | `VoodooHDADevice.cpp::serviceInterrupt` | Low/Medium | Apple's `handleStreamInterruptOnISR` (`0xe106`) tracks SDSTS bit 3 (FIFOE) and bit 4 (DESE) into separate per-stream counter arrays at controller +0x308 and +0x380. The engine can later query these for fault diagnosis. We log via IOLog but don't surface counters in telemetry. Useful to add — `diagnosticFifoErrors` / `diagnosticDescriptorErrors` would tell us at telemetry-read time whether a hardware fault occurred during a clip run. |
| **D20** | ISR engine-callback gated on "only BCIS" mask | `VoodooHDADevice.cpp::serviceInterrupt` | Low | Apple's ISR only invokes the engine's interrupt callback when `(SDSTS_bits & 0x1c) == 4` — that is, only `BCIS` set, no `FIFOE` or `DESE`. Error bits go through the D19 counter arrays and bypass the engine callback (to avoid mixing error-state hardware reads with normal position math). We always dispatch to engine code regardless of which status bits are set. Low risk because our engine doesn't fault on error-bit-set reads, but Apple's filtering is cleaner. |

## 11. Implementation status and next-batch plan

### Done (commits already in `3.3.5`)

| ID | Commit | What landed |
|----|--------|-------------|
| D1, D2, D4 | `80eed10` | Position monotonicity guard; DPIB warm-up wait; SDFMT/SDCTL2 read-back verification |
| D3 | `472288c` | Per-stream RUN-bit poll at start (Apple-equivalent per §12-Q1) — same commit also dropped digital-path slack (the §7 BDL geometry invariant) and added clear-before-set on SDCTL |

### Remaining — proposed next batch (D8 + D9 + D10 + D14)

The four-item batch below is the analogue of the D1-D4 batch we just
shipped: each item is structurally derivable from §3-§8 of this
spec, has a small surface area in our codebase, and matches a clear
Apple invariant.  Listed in dependency / risk order, smallest first.

#### Patch E1 — D10 — clear INTSTS.SIS before start

In `VoodooGFXHDAController::startStreamRegisters`, before issuing
RUN (and ideally before the SRST cycle in `prepareStreamDMA`):

```c
// Match AppleGFXHDAController::startStream (0xd5d8): clear any
// leftover pending interrupt for this stream so the first BCIS
// fires from a real buffer wrap, not a residual sticky.
mDevice->writeData32(HDAC_INTSTS, 1u << channel->streamId);
```

Risk: nil. The bit is W1C; writing 0 to bits we don't own does
nothing. Same change in `VoodooHDADevice` for the legacy path.

#### Patch E2 — D9 — full-clear SDCTL on SRST

In `VoodooGFXHDAController::resetStreamRegisters`, replace the
read-modify-write that ORs in SRST with a single full write:

```c
// Match AppleGFXHDAController::resetStreamForOffset (0xd4c0):
// write the entire SDCTL with only SRST set, clearing RUN and
// every interrupt enable in a single bus transaction.
mDevice->writeData32(channel->off + HDAC_SDCTL0, HDAC_SDCTL_SRST);
// poll for SRST ack, then write 0 to clear SRST, poll for clear ack.
```

Risk: low. Our prior `stopStreamRegisters` already cleared the
relevant bits; this just folds the clear into the SRST write itself.
Apple's pattern is one fewer race.

#### Patch E3 — D8 + D14 (twin items) — bus stall + bandwidth

These two are sibling PM-coordination requirements. Both need a
new lifetime hook: arm on first stream-start, release on last
stream-stop. Suggested implementation:

In `VoodooHDADevice` (controller object), keep an atomic refcount
of running engines:

```c
class VoodooHDADevice ... {
    SInt32 mRunningEngineCount;     // 0 = idle, >0 = at least one engine running
};

void VoodooHDADevice::onEngineStart() {
    if (OSIncrementAtomic(&mRunningEngineCount) == 0) {
        // First engine on this controller. Pin bus-stall budget.
        requireMaxBusStall(kVoodooHDABusStallNs);  // suggest 10 µs or property-driven
    }
}

void VoodooHDADevice::onEngineStop() {
    if (OSDecrementAtomic(&mRunningEngineCount) == 1) {
        // Last engine stopping. Release the budget.
        requireMaxBusStall(kIOMaxBusStall_None);
    }
}
```

Then in `VoodooHDAEngine::performAudioEngineStart` /
`performAudioEngineStop`, bracket the existing `channelStart` /
`channelStop` with `onEngineStart` / `onEngineStop`. The exact
constant for `kVoodooHDABusStallNs` should come from the controller's
own property (Apple reads it via `setRequireMaxBusStall` at probe
time — entry `0x93ee`). Pick a conservative 10 µs default and make
it overridable via IORegistry.

Risk: medium. `IOService::requireMaxBusStall` is a public KPI; the
sole concern is choosing a budget tight enough to prevent
underruns but loose enough not to wedge sleep transitions. Field
testing required.

D14's "send `kApplePrivateMessageBusy/Idle` upstream" can NOT be
mirrored in our codebase: that message ID is private to Apple's
graphics stack (AGDC / framebuffer driver wrap). The closest we
can do is the bus-stall reservation above, which provides
equivalent local PM protection without depending on Apple-private
PM message routing.

### Deferred (D5, D6, D7, D11, D12, D13, D15, D16, D17, D18, D19, D20)

All are Low severity per §10. None are tied to a current field
report. Pickup criteria for each is documented inline in §10.

## 12. Resolved open questions

All three open questions from the original draft were closed by
disassembling the actual call-site context with `otool -tv` and
cross-referencing the subclass vtable dumps for
`AppleGFXHDAEngineOutput` and `AppleGFXHDAEngineOutputDP`.  The
methodology is captured in `tools/ghidra/dump_call_offsets.py`,
which extracts the MMIO offsets from the disassembly surrounding
each call to a register-access wrapper.

### Q1 — what does the drain-stopping gate check?

**Resolved.** The wrapper `FUN_000033e6` is a generic 32-bit MMIO
read (it sits next to `FUN_00003284` = read8 and `FUN_00003334` =
read16, all of which take their offset in `ESI` and dereference
`controller->[0x88]` as the MMIO base). The offset passed in the
gate's call site is `stream_off + 0x80` — that is, `SDCTL` of *this
stream*. Bit 1 (mask `0x2`) of SDCTL is the `RUN` bit per HDA 1.0a.

So Apple's gate is:

```c
if (stream->state == STATE_STOPPING && (read32(stream_off + 0x80) & RUN)) {
    int n = 10000;
    do {
        if (!(read32(stream_off + 0x80) & RUN)) goto LAB_RUN;
        IODelay(1);
    } while (--n);
    return kIOReturnTimeout;
}
```

It is *not* a controller-wide flush bit — it is per-stream RUN, gated
on a software state-machine check. The check fires only when
*this* stream's previous teardown hasn't fully drained.

**Implication for our patch**: `commit 472288c`'s unconditional 1 ms
RUN-bit poll at the top of `startStreamRegisters` is structurally
equivalent (it covers the same race), with two differences:

  - Apple gates the poll on the software state-machine being in
    `STATE_STOPPING`; we have no state machine and always poll. The
    extra ~1 µs of work in the happy path is negligible.
  - Apple polls for up to 10 ms; we poll for up to 1 ms. Both are
    longer than any realistic per-stream drain on x86 HDA hardware.

D3 stays "closed by 472288c" with no further code change required.

### Q2 — what do the post-`takeTimeStamp` branches do for output?

**Resolved.** Both leaf-class overrides of the two pure-virtual
slots at `vtable+0xc70` and `vtable+0xd90` are trivial. The
disassembly of each (entry points in the .text section):

```
LAB_00029ca8 (AppleGFXHDAEngineOutput::vtable+0xc70):
    pushq %rbp
    movq  %rsp, %rbp
    movb  $0x1, %al           ; return true
    popq  %rbp
    retq

LAB_00029c8a (AppleGFXHDAEngineOutput::vtable+0xd90):
    pushq %rbp
    movq  %rsp, %rbp
    movl  $0xe00002bc, %eax    ; return kIOReturnNotAttached
    popq  %rbp
    retq
```

The first slot is "post-start check"; it always reports success. The
second slot ("deferred-work helper") returns `kIOReturnNotAttached`,
indicating that the leaf class does not participate in deferred
post-start work.

**Implication for our patch**: `performAudioEngineStart` on output
engines ends immediately after `takeTimeStamp()` — there is no
output-specific deferred work to mirror. Our existing
`VoodooHDAEngine::performAudioEngineStart` already terminates after
`takeTimeStamp(false)`, which matches Apple's behavior structurally.

### Q3 — what does `startDMAEngine` actually program?

**Resolved.** `AppleGFXHDAEngine::startDMAEngine` (entry `0x1e8fc`,
160 bytes) does *not* touch hardware registers directly. Disassembly
summary:

```c
int AppleGFXHDAEngine::startDMAEngine(bool param)
{
    // emit kdebug trace
    os_log("Calling startDMAEngine from %s", this->[0x33c]);

    // (1) guards
    if (this->[0x128] == NULL) return error_5ea;   // controller pointer
    if (this->[0x2f4] == 0)    return error_5eb;   // streamId

    // (2) seed initial sample position
    uint32_t localPos = 0;
    int err = this->[0x120]->vtable_0x180(&localPos);  // getLinkPositionFromSDLPIB
    if (err) return err;

    // (3) delegate to the controller
    err = this->controller->startStream(this->streamInfo, &localPos);
    if (err) return err;

    // (4) optional secondary-stream arm for DP fan-out
    if (this->[0x138] != NULL && !already_armed) {
        err = this->[0x138]->vtable_0x1f8(this->[0x184]);
        if (err) return err;
        this->[0x2f2] = 1;  // mark armed
    }
    return 0;
}
```

All register programming is inside `controller->startStream()`, which
we already analyzed in §4. The new finding here is the DP fan-out
arm at step (4): for DP audio with multiple streams sharing a single
codec, Apple arms a "secondary" stream alongside the primary. We
don't implement that — DP multi-stream is out of scope for the
current bug.

**Implication for our patch**: nothing additional to implement. The
register sequence Apple uses is exactly what we documented in §4 and
§5.

## 13. Audit scope and methodology

The §10 deviation table captures every finding from the systematic
walk of the AppleGFXHDA stream/engine lifecycle. The audit covered:

  - Controller-side lifecycle: `startStream`, `stopStream`,
    `stopStreamWithOffset`, `programStream`, `resetStream`,
    `resetStreamForOffset`, `enableStreamInterrupt`,
    `disableStreamInterrupt`, `validateBDLEntries`,
    `checkStreamErrorState`, `probeStreamCapabilities`,
    `setupVariableStreamLatency`, `dmaIsRunning`.
  - Controller-side bus/PM: `enableMaxBusStall`,
    `disableMaxBusStall`, `setRequireMaxBusStall`,
    `requestBandwidth`.
  - Controller-side interrupts: `handleStreamInterruptOnISR`,
    `handleStreamInterruptOnWorkLoop`.
  - Engine-side lifecycle: `performAudioEngineStart`,
    `performAudioEngineStop`, `performFormatChange`,
    `startDMAEngine`, `stopDMAEngine`, `stopHardware`,
    `controllerForcedPause`, `handlePowerStateChange`,
    `setPowerStateToActive`, `setPowerStateToIdle`,
    `setPowerStateToSleep`.
  - Engine-side data path: `clipOutputSamples`,
    `eraseOutputSamples`, `resetClipPosition`,
    `convertInputSamples`, `takeTimeStamp`,
    `getCurrentSampleFrame`, `getCurrentSamplePosFromSource`.
  - Engine-side timing: `setEngineSampleLatency`,
    `recalculateEnginesSampleLatency`,
    `recalculateEnginesSampleOffset`, `streamFormatChanged`.

For each function the audit ran
`tools/ghidra/dump_call_offsets.py` to capture the disassembly
window around every call to a register-access wrapper (`read8/16/32`,
`write32/16-masked/8`, `rmw32`). The captured immediate-form
offset values in `%esi` resolve to specific HDA MMIO registers per
HDA 1.0a + our `tranc/Registers.h` mapping (verified against §5).

Findings were classified by severity:

  - **High**: a known or reproducible audio-correctness symptom
    can be attributed to the deviation. (D1, D2, D8, D14)
  - **Medium**: invariant violation under known hardware behavior
    where the bug would only manifest under specific timing /
    state. (D3, D4, D9, D10)
  - **Low**: structural / cosmetic deviation or diagnostic gap
    with no current field-report correlation. (D5–D7, D11–D13,
    D15–D20)

The audit considered each Apple register touch *individually* and
checked whether our code performs the equivalent. Per-function
delegation chains (e.g. `startDMAEngine` → `controller->startStream`)
were followed end to end so that no MMIO touch was missed by
stopping at a vtable boundary.

## 14. References — updated

- `docs/audio_stack_decompiled/AppleGFXHDA_decompiled.c` — raw decompile
- `docs/audio_stack_decompiled/IOAudioFamily_decompiled.c` — IOAudio base
- `/tmp/apple_decompile/apple_vtables.txt` — full vtable dump (200 classes)
- `/tmp/apple_decompile/apple_call_offsets.txt` — disassembly with MMIO
  offsets surrounding each register-wrapper call (used to resolve Q1)
- `/tmp/apple_decompile/AppleGFXHDA_resolved.c` — decompile with vtable
  calls annotated with resolved method names
- `tools/ghidra/dump_vtables.py` — Ghidra headless vtable extractor
- `tools/ghidra/dump_call_offsets.py` — Ghidra headless caller-context
  extractor (captures the MMIO offset values in `ESI` immediately
  before each register-wrapper call)
- `tools/ghidra/resolve_vtables.py` — local post-processor (Itanium-ABI
  corrected, +0x10 from `__ZTV<class>` to vtable[0])
- HDA 1.0a specification — register semantics ground truth
- Apple KDK 26.3, `System/Library/Extensions/AppleGFXHDA.kext`

