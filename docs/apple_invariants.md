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
- **4.2 + 4.3**: **MISSING.** We do not have a drain-stopping gate at
  the start of `startStreamRegisters`. Our `commit 472288c` added a
  1 ms RUN-bit poll as belt-and-suspenders, but Apple's gate is on
  the controller-wide status flag, not per-stream RUN. The functional
  difference: ours catches an unfinished hardware stop on this stream;
  Apple's catches an unfinished hardware stop globally (e.g., still
  draining FIFOs).
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

- **5.1 + 5.2**: **MISSING read-back verification.** Our `setStreamId`
  (VoodooGFXHDA.cpp:643) writes SDCTL2 but doesn't read back. Our
  `channelSetFormat` writes SDFMT but doesn't read back. On AMD
  Polaris, where the SDFMT can be silently rejected due to
  bit-depth/channel-count mismatch, this would catch the bug at
  program time instead of producing crackle/buzz at playback time.
- **5.3**: We program BDL in `setupBdl` directly on the controller
  with no per-stream object. Functional equivalent.
- **5.4**: We unconditionally enable DPIB and never wait. If our
  dmaPos read returns 0 we fall back to SDLPIB. This is one source
  of "phantom 0-position" artifacts at start.
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
- **8.2**: **MISSING.** We have no monotonicity guard. If SDLPIB
  briefly glitches backwards (Polaris is known to), our reported
  position will too, and IOAudio's clip-erase math will compute the
  erase region from the new (smaller) position → erase data the
  hardware is *about to play* → crackle.
- **8.3**: We try `channel->dmaPos` first, fall back to SDLPIB. ✓
  But we don't have Apple's "DPIB warm-up wait" from §5.4, so a
  cold-start DPIB read can return 0 and confuse the engine.

**This is the most likely structural cause of Сергей's crackle pattern.**
The "1s clean → crackle → 3–4 fading crackles" maps to: monotonic
position for ~1 buffer wrap, then a backward SDLPIB read causes
erase-into-future, the resulting click decays as the wrap consumes
the erroneously-zeroed region over subsequent wraps.

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

| # | Deviation | Location | Severity | Notes |
|---|---|---|---|---|
| D1 | No SDLPIB monotonicity guard in `channelGetPosition` | `VoodooHDADevice.cpp:3117` | **High** | Most likely root cause of "crackle after wrap" on AMD HDMI |
| D2 | No "DPIB warm-up wait" after programming dmaPos | `VoodooGFXHDA.cpp:setupBdl` | **High** | Cold-start can return 0 → start-of-stream glitch |
| D3 | No drain-stopping gate at `startStream` entry | `VoodooGFXHDA.cpp::startStreamRegisters` | **Medium** | Already partially mitigated by `commit 472288c` (per-stream RUN poll) |
| D4 | No SDFMT/SDCTL2 read-back verification in program path | `VoodooHDADevice.cpp::channelSetFormat`, `VoodooGFXHDA.cpp::setStreamId` | **Medium** | Silent format reject on AMD → wrong bit-depth playback |
| D5 | RUN + interrupt enables collapsed into one SDCTL write | `VoodooGFXHDA.cpp:608-610` | **Low** | Atomic on x86; only diagnostic value to split |
| D6 | No engine state machine; only `HDAC_CHN_RUNNING` bit | `Channel.flags` | **Low** | Structural cleanup; no current bug attributable to this |
| D7 | No path-set abstraction | `Channel.pcmDevice` | **Low** | Fine for the configurations we support |

## 11. Proposed implementation plan

A single patch series (3–5 commits) addressing D1..D4. D5..D7 can wait.

### Commit A: SDLPIB monotonicity guard (D1)

In `VoodooHDADevice::channelGetPosition` (and the GFX-controller
mirror `VoodooGFXHDAController::getLinkPosition`):

```c
UInt32 raw = read_position();                       // SDLPIB or DPIB
UInt32 frames = raw / bytesPerFrame;
UInt32 last = channel->lastReportedFrames;

if (frames < last) {
    // Backward move within the same wrap window → glitch.
    // Distinguish from a legitimate wrap by checking the wrap count.
    UInt32 deltaIfWrap = (channel->numFrames - last) + frames;
    if (deltaIfWrap < channel->numFrames / 4) {
        // Looks like a true wrap (small forward distance from end-of-buffer).
        channel->wrapCount++;
    } else {
        // Looks like an SDLPIB glitch. Return last known.
        diagnosticPositionRejects++;
        return last * bytesPerFrame;
    }
}
channel->lastReportedFrames = frames;
return raw;
```

### Commit B: DPIB warm-up wait (D2)

In `VoodooGFXHDAController::setupBdl`, after enabling DPIB:

```c
if (channel->dmaPos && !(read_DPIBLBASE() & 1)) {
    write_DPIBLBASE(addr | 1);
    write_DPIBUBASE(addr >> 32);
    // Wait up to 3 × poll for DPIB to start updating, matching Apple's
    // §5.4 invariant. Without this, the first read can return 0.
    for (int i = 0; i < 3; i++) {
        if (!(read_status() & DMAPOS_BUSY_BIT)) break;
        IODelay(10);
    }
}
```

### Commit C: drain-stopping gate (D3)

In `VoodooGFXHDAController::startStreamRegisters`, replace the 1 ms
per-stream RUN poll (added in `commit 472288c`) with the
Apple-style controller-status drain:

```c
// Replace the 1ms RUN poll with a 10ms status-bit drain.
// The controller status bit (specific bit TBD from FUN_000033e6 semantics)
// covers all streams transitioning out of stopped.
if (mDevice->controllerStoppingBitSet()) {
    int n = 10000;
    while (n-- > 0) {
        if (!mDevice->controllerStoppingBitSet()) break;
        IODelay(1);
    }
    if (n <= 0)
        mDevice->errorMsg("startStream: controller drain timed out\n");
}
```

(Requires identifying the specific bit; see open questions §12.)

### Commit D: SDFMT/SDCTL2 read-back verification (D4)

In `VoodooHDADevice::channelSetFormat`, after writing SDFMT:

```c
writeData16(channel->off + HDAC_SDFMT, fmt);
UInt16 rb = readData16(channel->off + HDAC_SDFMT);
if ((rb ^ fmt) & 0x7f7f) {
    errorMsg("SDFMT readback mismatch: wrote=0x%04x read=0x%04x\n", fmt, rb);
    return -1;
}
```

Similar for SDCTL2 in `setStreamId`.

## 12. Open questions

- **Q1**: What controller status bit does `FUN_000033e6 & 2` test in
  Apple's drain-stopping gate? Likely HDAC_SDSTS_DESE or a controller-level
  status; needs further investigation in the resolved decompile of
  `stopStream` and `stopStreamWithOffset`.
- **Q2**: What is the exact override of vtable+0xc70/+0xd90 in
  `AppleGFXHDAEngineOutput` and `AppleGFXHDAEngineOutputDP` (the
  post-start branches in §3)? Need to dump those subclass vtables
  separately.
- **Q3**: How does `AppleGFXHDAEngine::startDMAEngine` (vtable+0xc58)
  actually program the per-stream registers? It delegates to a
  child object via a vtable call — need to follow that call into
  `IOGFXHDAStream` / `AppleGFXHDAStream`.

## 13. References

- `docs/audio_stack_decompiled/AppleGFXHDA_decompiled.c` — raw decompile
- `docs/audio_stack_decompiled/IOAudioFamily_decompiled.c` — IOAudio base
- `/tmp/apple_decompile/apple_vtables.txt` — full vtable dump (200 classes)
- `/tmp/apple_decompile/AppleGFXHDA_resolved.c` — decompile with vtable
  calls annotated with resolved method names
- `tools/dump_vtables_jython.py` — Ghidra headless vtable extractor
- `tools/resolve_vtables.py` — local post-processor (Itanium-ABI corrected)
- HDA 1.0a specification — register semantics ground truth
- Apple KDK 26.3, `System/Library/Extensions/AppleGFXHDA.kext`
