# @runtime Jython
# -*- coding: utf-8 -*-
# Dumps vtables for AppleGFX HDA classes by walking __ZTV symbols and resolving each entry.
# Also re-decompiles target functions; the dump_vtable output lets us cross-reference
# (**(code **)(*this + 0xN))() calls to actual method names by offset.
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.program.model.address import Address
from ghidra.program.model.symbol import SymbolType, SourceType

prog = getCurrentProgram()
mem = prog.getMemory()
st = prog.getSymbolTable()
af = prog.getAddressFactory()
listing = prog.getListing()

import re
def demangle(name):
    # ghidra has a built-in demangler; use it via DemanglerUtil
    try:
        from ghidra.app.util.demangler.gnu import GnuDemanglerParser, GnuDemangler
        dem = GnuDemangler()
        opts = dem.createDefaultOptions()
        r = dem.demangle(name, opts)
        if r:
            return r.getSignature()
    except Exception as e:
        pass
    return name

out = open("/tmp/apple_vtables.txt", "w")
def w(s): out.write(s + "\n")

w("Program: " + prog.getName())
w("Image base: " + str(prog.getImageBase()))
w("=" * 80)

# Find all vtable symbols (__ZTV...)
vtable_syms = []
for s in st.getDefinedSymbols():
    n = s.getName(True)
    if n.startswith("__ZTV") or "vtable for" in n or "::vtable" in n:
        vtable_syms.append(s)

w("Found %d vtable symbols" % len(vtable_syms))

# For each vtable, walk entries
for vs in vtable_syms:
    addr = vs.getAddress()
    name = vs.getName(True)
    dem = demangle(name)
    w("\n" + "=" * 80)
    w("VTABLE: %s" % dem)
    w("MANGLED: %s" % name)
    w("ADDRESS: %s" % addr)
    w("-" * 80)

    # vtable layout (Itanium ABI):
    # vtable[-2] = offset to top
    # vtable[-1] = RTTI ptr (may be NULL if no RTTI)
    # vtable[0..N] = function pointers
    # Apple's binary has no RTTI (stripped), but the function pointers ARE there.
    # The first entry (offset 0) IS the start; subsequent entries every 8 bytes.
    # We stop when we hit:
    #  - the next defined symbol (another vtable or end of section)
    #  - a NULL pointer (sometimes used as terminator/padding)
    #  - an address with no corresponding code

    cur = addr
    idx = 0
    bytes_off = 0
    while idx < 800:  # safety cap
        try:
            ptr_val = mem.getLong(cur)
        except:
            break
        ptr_addr = af.getAddress("0x%x" % (ptr_val & 0xFFFFFFFFFFFFFFFF))
        if ptr_val == 0:
            w("  +0x%-5x [%4d] NULL" % (bytes_off, idx))
            # don't stop on NULL — some vtables have NULL slots for missing methods
            cur = cur.add(8)
            idx += 1
            bytes_off += 8
            continue

        # Check if there's a symbol at ptr_addr
        psym = st.getPrimarySymbol(ptr_addr)
        if psym is None:
            # Stop if we left code section
            blk = mem.getBlock(ptr_addr)
            if blk is None or not blk.isExecute():
                w("  +0x%-5x [%4d] (end-of-vtable: non-code 0x%x)" % (bytes_off, idx, ptr_val))
                break
            label = "0x%x" % ptr_val
        else:
            sym_name = psym.getName(True)
            # If symbol is another vtable, we've gone past the end
            if sym_name.startswith("__ZTV") and sym_name != name and idx > 0:
                w("  +0x%-5x [%4d] (next vtable starts here: %s)" % (bytes_off, idx, sym_name))
                break
            label = demangle(sym_name)
            if label == sym_name:
                label = sym_name  # fallback
        w("  +0x%-5x [%4d] %s" % (bytes_off, idx, label))
        cur = cur.add(8)
        idx += 1
        bytes_off += 8

out.close()
print("DONE: /tmp/apple_vtables.txt, %d vtables dumped" % len(vtable_syms))
