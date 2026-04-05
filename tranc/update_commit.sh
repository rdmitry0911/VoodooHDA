#!/bin/sh
# Auto-update GitCommit.h with current git short hash before each build.
# Added as a "Run Script" build phase in Xcode (before Compile Sources).

HEADER="${SRCROOT}/GitCommit.h"
COMMIT=$(cd "${SRCROOT}" && git rev-parse --short HEAD 2>/dev/null || echo "unknown")

echo "#define VOODOO_HDA_GIT_COMMIT \"${COMMIT}\"" > "${HEADER}"
echo "VoodooHDA: GitCommit.h updated to ${COMMIT}"
