#!/bin/sh
# Collect VoodooHDA HDMI diagnostics from an already loaded driver.

set -u

SCRIPT_DIR=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
VHDA_DIAG="${VHDA_DIAG:-$SCRIPT_DIR/vhda_diag}"
VHDA_MSGBUF="${VHDA_MSGBUF:-$SCRIPT_DIR/vhda_msgbuf}"
OUT_DIR="${1:-/tmp/vhda_diag_$(date +%Y%m%d_%H%M%S)}"
SAMPLE_SECONDS="${VHDA_COLLECT_SECONDS:-5}"

run_capture()
{
	name="$1"
	shift
	{
		echo "\$ $*"
		"$@"
		echo "exit=$?"
	} > "$OUT_DIR/$name.txt" 2>&1
}

run_optional()
{
	name="$1"
	shift
	if command -v "$1" >/dev/null 2>&1 || [ -x "$1" ]; then
		run_capture "$name" "$@"
	else
		echo "missing: $1" > "$OUT_DIR/$name.txt"
	fi
}

mkdir -p "$OUT_DIR" || exit 1

{
	echo "VoodooHDA diagnostic collection"
	echo "date=$(date)"
	echo "uname=$(uname -a)"
	echo "out=$OUT_DIR"
	echo "sample_seconds=$SAMPLE_SECONDS"
} > "$OUT_DIR/00_environment.txt"

if [ ! -x "$VHDA_DIAG" ]; then
	echo "vhda_diag not found or not executable: $VHDA_DIAG" | tee "$OUT_DIR/ERROR.txt" >&2
	exit 1
fi

run_capture "01_services" "$VHDA_DIAG" services
run_capture "02_flags" "$VHDA_DIAG" flags
run_capture "03_channels_before" "$VHDA_DIAG" list
run_capture "04_telemetry_before" "$VHDA_DIAG" get all
run_optional "05_ioreg_vhda" ioreg -r -n VoodooHDADevice -l
run_optional "06_kextstat_vhda" kextstat

echo "Start playback now if the issue requires active audio. Waiting $SAMPLE_SECONDS seconds..." | tee "$OUT_DIR/07_instruction.txt"
sleep "$SAMPLE_SECONDS"

run_capture "08_channels_during" "$VHDA_DIAG" list
run_capture "09_telemetry_during" "$VHDA_DIAG" get all

sleep "$SAMPLE_SECONDS"

run_capture "10_channels_after" "$VHDA_DIAG" list
run_capture "11_telemetry_after" "$VHDA_DIAG" get all

if [ -x "$VHDA_MSGBUF" ]; then
	run_capture "12_message_buffer" "$VHDA_MSGBUF"
else
	echo "vhda_msgbuf not bundled; skipping driver message buffer" > "$OUT_DIR/12_message_buffer.txt"
fi

ARCHIVE="$OUT_DIR.tar.gz"
tar -czf "$ARCHIVE" -C "$(dirname "$OUT_DIR")" "$(basename "$OUT_DIR")"

echo "Collected diagnostics:"
echo "$OUT_DIR"
echo "$ARCHIVE"
