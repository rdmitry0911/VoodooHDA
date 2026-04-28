#!/bin/sh
# Build VoodooHDA.kext into ./build/.
#
# Usage:
#   ./build.sh                 # build Debug + Release for x86_64
#   ./build.sh debug           # build Debug only
#   ./build.sh release         # build Release only
#   ./build.sh clean           # remove ./build/
#
# Output:
#   build/Debug/VoodooHDA.kext     (with VOODOO_HDA_DEBUG_BUILD=1)
#   build/Release/VoodooHDA.kext   (release/non-debug)

set -eu

cd "$(dirname "$0")"
ROOT="$(pwd)"
PROJ="$ROOT/tranc/VoodooHDA.xcodeproj"
BUILD="$ROOT/build"

build_one() {
	cfg="$1"
	echo "==> xcodebuild -configuration $cfg"
	xcodebuild \
		-project "$PROJ" \
		-target VoodooHDA \
		-configuration "$cfg" \
		-arch x86_64 \
		build
}

case "${1:-all}" in
	clean)
		echo "==> rm -rf $BUILD"
		rm -rf "$BUILD"
		;;
	debug|Debug)
		build_one Debug
		echo "Built: $BUILD/Debug/VoodooHDA.kext"
		;;
	release|Release)
		build_one Release
		echo "Built: $BUILD/Release/VoodooHDA.kext"
		;;
	all|"")
		build_one Debug
		build_one Release
		echo "Built: $BUILD/Debug/VoodooHDA.kext"
		echo "Built: $BUILD/Release/VoodooHDA.kext"
		;;
	*)
		echo "Usage: $0 [debug|release|all|clean]" >&2
		exit 1
		;;
esac
