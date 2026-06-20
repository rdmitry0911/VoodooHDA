#!/usr/bin/env python3
"""Annotate vtable calls in Ghidra decompile output with resolved method names.

Reads:
  - apple_vtables.txt (output from dump_vtables_jython.py): per-class offset → method
  - AppleGFXHDA_decompiled.c                              : original decompile

Writes:
  - AppleGFXHDA_resolved.c                                : decompile with each
    (**(code**)(*VAR + 0xN))() call followed by an inline
    /* → ClassName::methodName */ annotation.
"""
import re
import sys
from collections import defaultdict

# Mangled-class-name suffix → printable class name we expect in decompile
# (Itanium ABI: __ZTV<len><Name>)
def parse_vtable_class(mangled):
    # __ZTV21AppleGFXHDAController  →  AppleGFXHDAController
    m = re.match(r'^__ZTV(N?)(\d+)(.*)$', mangled)
    if not m:
        return None
    is_nested, length, rest = m.groups()
    length = int(length)
    if is_nested:
        return None  # skip nested (MetaClass etc.)
    return rest[:length]

vtables = defaultdict(dict)   # class → { byte_offset: method_name }
cur_cls = None

with open("/tmp/apple_decompile/apple_vtables.txt") as f:
    for line in f:
        if line.startswith("VTABLE:"):
            mangled = line.split(":", 1)[1].strip()
            cur_cls = parse_vtable_class(mangled)
        elif cur_cls and line.startswith("  +0x"):
            m = re.match(r'\s+\+0x([0-9a-f]+)\s+\[\s*\d+\]\s+(.+)$', line.rstrip())
            if m:
                off = int(m.group(1), 16)
                name = m.group(2).strip()
                vtables[cur_cls][off] = name

print(f"Loaded {len(vtables)} vtables from apple_vtables.txt", file=sys.stderr)
for c in ("AppleGFXHDAEngine", "AppleGFXHDAController", "AppleGFXHDAStream", "IOGFXHDAStream"):
    print(f"  {c}: {len(vtables[c])} methods", file=sys.stderr)

# Parse the decompile, tracking which class we're in based on the function name
inp = open("/tmp/apple_decompile/AppleGFXHDA_decompiled.c").read()
out_lines = []

# Match Ghidra's per-function header line: e.g.
#   /* AppleGFXHDAEngine::performAudioEngineStart @ 0x1e3ee */
# OR the C++ method signature line that mentions the class name explicitly.
fn_header_re = re.compile(r'^\s*/\*\s*(\w+(?:::\w+)*)\s*@\s*0x([0-9a-f]+)\s*\*/')

# Inside each function, match
#   (**(code **)(*<VAR> + 0xN))(...)
# Some variants drop the outer ()(...).
vtcall_re = re.compile(r'\(\*\*\(code \*\*\)\(\*(\w+) \+ 0x([0-9a-f]+)\)\)')

current_class = None
in_function = False

for line in inp.splitlines():
    # Detect function header
    m = fn_header_re.match(line)
    if m:
        qname = m.group(1)
        if '::' in qname:
            current_class = qname.split('::', 1)[0]
        else:
            current_class = None
        in_function = True

    # Annotate vtable calls
    def annot(mc):
        var = mc.group(1)
        # Itanium ABI: __ZTV<class> symbol points to vtable[-2] (top-offset),
        # vtable[-1] is the RTTI pointer, and the first real method pointer
        # sits at vtable[0]. An object's vptr (what code dereferences as
        # *this) points at vtable[0], so a call-site offset of 0xN
        # corresponds to dump-offset 0xN + 0x10.
        off = int(mc.group(2), 16) + 0x10
        # Try the current class first, then walk up known parents
        for cls in (current_class,
                    "AppleGFXHDAEngine" if current_class else None,
                    "AppleGFXHDAController" if current_class else None,
                    "IOGFXHDAStream", "AppleGFXHDAStream",
                    "AppleGFXHDADriver", "AppleGFXHDANode",
                    "AppleGFXHDAPath", "AppleGFXHDAPathSet", "AppleGFXHDAEngineOutput"):
            if cls and cls in vtables and off in vtables[cls]:
                return mc.group(0) + f"/*={cls}::{vtables[cls][off].split('::',1)[-1]}*/"
        return mc.group(0) + f"/*=?+0x{off:x}*/"

    if current_class and vtcall_re.search(line):
        line = vtcall_re.sub(annot, line)
    out_lines.append(line)

open("/tmp/apple_decompile/AppleGFXHDA_resolved.c", "w").write("\n".join(out_lines))
print(f"Wrote /tmp/apple_decompile/AppleGFXHDA_resolved.c ({len(out_lines)} lines)", file=sys.stderr)
