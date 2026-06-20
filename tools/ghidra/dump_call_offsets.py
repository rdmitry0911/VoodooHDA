# @runtime Jython
# -*- coding: utf-8 -*-
# Dump disassembly around calls to register-access wrappers (FUN_00003284/3334/33e6/78a0/8d30/8d74/0xa55e)
# so we can see what MMIO offsets are being passed.

from ghidra.program.model.symbol import SymbolType, RefType
from ghidra.program.model.listing import Function

prog = getCurrentProgram()
listing = prog.getListing()
fm = prog.getFunctionManager()
refmgr = prog.getReferenceManager()

# Target wrappers to investigate
TARGET_ADDRS = ["00003284", "00003334", "000033e6", "000078a0", "00008d30", "00008d74", "0000a55e"]

# Functions we want to know the offsets inside
CALLER_FUNCS = [
    "AppleGFXHDAController::startStream",        # 0xd5d8
    "AppleGFXHDAController::stopStream",         # 0xd816
    "AppleGFXHDAController::stopStreamWithOffset", # 0xd980
    "AppleGFXHDAController::programStream",      # 0xda0c
    "AppleGFXHDAController::enableStreamInterrupt",
    "AppleGFXHDAController::disableStreamInterrupt",
    "AppleGFXHDAController::handleStreamInterruptOnISR",
    "AppleGFXHDAEngine::startDMAEngine",
    "AppleGFXHDAEngine::stopDMAEngine",
    "AppleGFXHDAEngine::performAudioEngineStart",
    "AppleGFXHDAEngine::performAudioEngineStop",
]

out = open("/tmp/apple_call_offsets.txt", "w")
def w(s): out.write(s + "\n")

af = prog.getAddressFactory()
target_addrs_set = set([af.getAddress("0x" + x).getOffset() for x in TARGET_ADDRS])

def find_function(qname):
    for f in fm.getFunctions(True):
        if f.getName(True) == qname:
            return f
    # try fuzzy
    for f in fm.getFunctions(True):
        if f.getName(True).endswith("::" + qname.split("::")[-1]):
            return f
    return None

for fn_name in CALLER_FUNCS:
    f = find_function(fn_name)
    if f is None:
        w("\n=== NOT FOUND: " + fn_name + " ===")
        continue
    w("\n=== " + fn_name + " @ " + str(f.getEntryPoint()) + " ===")
    body = f.getBody()
    # Walk instructions inside this function's body
    iter = listing.getInstructions(body, True)
    prev_lines = []  # rolling buffer of last 5 instructions
    for instr in iter:
        line = "  %s: %s" % (instr.getAddress(), instr)
        prev_lines.append(line)
        if len(prev_lines) > 6:
            prev_lines.pop(0)
        # Is this a CALL to one of the target wrappers?
        if instr.getFlowType().isCall():
            flow_addrs = [r.getToAddress() for r in instr.getReferencesFrom() if r.getReferenceType().isFlow()]
            for fa in flow_addrs:
                if fa.getOffset() in target_addrs_set:
                    # Emit the rolling context
                    w("--- call to FUN_%08x at %s ---" % (fa.getOffset(), instr.getAddress()))
                    for pl in prev_lines:
                        w(pl)

out.close()
print("DONE: /tmp/apple_call_offsets.txt")
