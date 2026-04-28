#!/bin/bash
# Diagnostic sweep for HDMI audio: for each ELD preset, install it, force the
# pin "active", enable the chord generator, kick the engine for ~3 seconds, dump
# the captured PCM and a register snapshot. Pack everything as a single archive.
#
# Usage:
#   tools/vhda_hdmi_sweep.sh -c <channel> [-o out_dir] [-d duration_sec]
#                            [-s service] [-p "preset1 preset2 ..."]
#
# Requirements:
#   - VoodooHDA debug kext loaded
#   - tools/vhda_diag built (run ./tools/build_vhda_diag.sh or compile directly)
#   - macOS afplay
#   - flac (preferred) or zstd or xz on PATH for compression
#
# Example:
#   sudo tools/vhda_hdmi_sweep.sh -c 2 -o /tmp/hdmi_diag -d 3
#
# IMPORTANT: this kicks the engine by playing 5s of silence to whatever device
# is the system default output. Make sure the targeted HDMI is the default
# output before running, otherwise the engine for that channel won't start.

set -euo pipefail

SELF_DIR="$(cd "$(dirname "$0")" && pwd)"
VHDA="$SELF_DIR/vhda_diag"

CHANNEL=""
OUT_DIR=""
DURATION=3
SERVICE=""
PRESETS_OVERRIDE=""

usage() {
	cat <<EOF
Usage: $0 -c <channel> [-o out_dir] [-d duration_sec] [-s service]
          [-p "preset1 preset2 ..."]

Options:
  -c  HDMI engine channel index (required; see 'vhda_diag list')
  -o  Output directory (default: /tmp/vhda_hdmi_sweep_<timestamp>)
  -d  Playback duration in seconds (default: 3)
  -s  VoodooHDA service index (default: 0)
  -p  Space-separated list of ELD presets to sweep
      (default: all from 'vhda_diag list-elds')
EOF
	exit 1
}

while getopts "c:o:d:s:p:h" opt; do
	case "$opt" in
		c) CHANNEL="$OPTARG" ;;
		o) OUT_DIR="$OPTARG" ;;
		d) DURATION="$OPTARG" ;;
		s) SERVICE="$OPTARG" ;;
		p) PRESETS_OVERRIDE="$OPTARG" ;;
		*) usage ;;
	esac
done

[[ -z "$CHANNEL" ]] && usage
[[ ! -x "$VHDA" ]] && { echo "vhda_diag not found at $VHDA — build it first" >&2; exit 1; }

VHDA_ARGS=()
[[ -n "$SERVICE" ]] && VHDA_ARGS+=( "--service=$SERVICE" )

TS="$(date +%Y%m%d_%H%M%S)"
[[ -z "$OUT_DIR" ]] && OUT_DIR="/tmp/vhda_hdmi_sweep_$TS"
mkdir -p "$OUT_DIR"

# Capture environment baseline once
echo "==> environment"
{
	uname -a
	sw_vers
	echo
	"$VHDA" "${VHDA_ARGS[@]}" services 2>&1 || true
	echo
	"$VHDA" "${VHDA_ARGS[@]}" list 2>&1 || true
} > "$OUT_DIR/env.txt"

# Generate a 1-second silence WAV for kicking the engine via afplay -t.
SILENCE="$OUT_DIR/silence.wav"
python3 - <<PY > /dev/null
import wave, struct
with wave.open("$SILENCE","wb") as f:
    f.setnchannels(2); f.setsampwidth(2); f.setframerate(48000)
    f.writeframes(b"\\x00" * (48000 * 2 * 2 * 1))
PY

# Determine preset list
if [[ -n "$PRESETS_OVERRIDE" ]]; then
	PRESETS=( $PRESETS_OVERRIDE )
else
	mapfile -t PRESETS < <("$VHDA" list-elds | awk -F'[= ]+' '{print $2}')
fi

echo "==> sweep channel=$CHANNEL duration=${DURATION}s presets=(${PRESETS[*]})"

cleanup() {
	"$VHDA" "${VHDA_ARGS[@]}" tap-off "$CHANNEL"   2>/dev/null || true
	"$VHDA" "${VHDA_ARGS[@]}" chord  "$CHANNEL" off 2>/dev/null || true
	"$VHDA" "${VHDA_ARGS[@]}" clear-override "$CHANNEL" 2>/dev/null || true
}
trap cleanup EXIT INT TERM

for preset in "${PRESETS[@]}"; do
	[[ -z "$preset" ]] && continue
	echo "--> preset $preset"
	PDIR="$OUT_DIR/$preset"
	mkdir -p "$PDIR"

	"$VHDA" "${VHDA_ARGS[@]}" clear-override "$CHANNEL"
	"$VHDA" "${VHDA_ARGS[@]}" set-eld "$CHANNEL" "$preset"
	"$VHDA" "${VHDA_ARGS[@]}" force-active "$CHANNEL" on
	"$VHDA" "${VHDA_ARGS[@]}" chord "$CHANNEL" on
	"$VHDA" "${VHDA_ARGS[@]}" tap-reset
	"$VHDA" "${VHDA_ARGS[@]}" tap-on "$CHANNEL"

	# Kick the engine: play silence for the requested duration. The chord
	# generator will overwrite our zeroes with the synthesized harmonics.
	for ((i = 0; i < DURATION; i++)); do
		afplay "$SILENCE" 2>/dev/null || true
	done

	"$VHDA" "${VHDA_ARGS[@]}" tap-off "$CHANNEL"
	"$VHDA" "${VHDA_ARGS[@]}" dump-pcm "$CHANNEL" "$PDIR/capture.wav" || \
		echo "    (no samples — engine likely did not start; check default output)" >&2
	"$VHDA" "${VHDA_ARGS[@]}" snapshot "$CHANNEL" "$PDIR/snapshot.json" || true
	"$VHDA" "${VHDA_ARGS[@]}" report   "$CHANNEL" > "$PDIR/telemetry.txt" 2>&1 || true
done

cleanup

# Compress captured WAVs to keep the archive small
echo "==> compress WAVs"
if command -v flac >/dev/null 2>&1; then
	find "$OUT_DIR" -name 'capture.wav' -print0 | xargs -0 -r -P 4 -I{} flac -s -8 -f -o {}.flac {} && \
		find "$OUT_DIR" -name 'capture.wav' -delete
elif command -v zstd >/dev/null 2>&1; then
	find "$OUT_DIR" -name 'capture.wav' -print0 | xargs -0 -r -P 4 zstd --rm -19 -q
else
	echo "    no flac/zstd installed; WAVs left uncompressed" >&2
fi

ARCHIVE="$OUT_DIR.tar"
echo "==> pack to $ARCHIVE.{zst,gz}"
tar -C "$(dirname "$OUT_DIR")" -cf "$ARCHIVE" "$(basename "$OUT_DIR")"
if command -v zstd >/dev/null 2>&1; then
	zstd -19 --rm -q "$ARCHIVE"
	echo "    archive: $ARCHIVE.zst"
else
	gzip -9 "$ARCHIVE"
	echo "    archive: $ARCHIVE.gz"
fi

echo "done."
