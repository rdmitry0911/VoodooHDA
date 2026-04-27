#!/bin/sh
# Collect VoodooHDA HDMI diagnostics from an already loaded driver.
#
# Snapshots every VoodooHDADevice service (the host can have one for the
# discrete GPU HDMI codec and another for the PCH/Intel HDA), and during
# the active-playback window samples telemetry continuously so that engines
# which are only running between bursts still show up.

set -u

SCRIPT_DIR=$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)
VHDA_DIAG="${VHDA_DIAG:-$SCRIPT_DIR/vhda_diag}"
VHDA_MSGBUF="${VHDA_MSGBUF:-$SCRIPT_DIR/vhda_msgbuf}"
OUT_DIR="${1:-/tmp/vhda_diag_$(date +%Y%m%d_%H%M%S)}"
SAMPLE_SECONDS="${VHDA_COLLECT_SECONDS:-8}"
SAMPLE_INTERVAL="${VHDA_COLLECT_INTERVAL:-0.25}"

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
	echo "sample_interval=$SAMPLE_INTERVAL"
} > "$OUT_DIR/00_environment.txt"

if [ ! -x "$VHDA_DIAG" ]; then
	echo "vhda_diag not found or not executable: $VHDA_DIAG" | tee "$OUT_DIR/ERROR.txt" >&2
	exit 1
fi

run_capture "01_services" "$VHDA_DIAG" services
run_capture "02_flags" "$VHDA_DIAG" flags

# Determine the list of service indexes from `vhda_diag services`.
SERVICE_INDEXES=$(awk -F'[= ]' '/^service=/ {print $2}' "$OUT_DIR/01_services.txt")
if [ -z "$SERVICE_INDEXES" ]; then
	echo "no VoodooHDADevice services found; nothing to sample" \
		| tee "$OUT_DIR/ERROR.txt" >&2
	# Still attempt the rest in case msgbuf / kextstat help triage.
	SERVICE_INDEXES=""
fi

# Pre-playback per-service snapshots.
for SVC in $SERVICE_INDEXES; do
	run_capture "03_channels_before_svc${SVC}" "$VHDA_DIAG" --service="$SVC" list
	run_capture "04_telemetry_before_svc${SVC}" "$VHDA_DIAG" --service="$SVC" get all
done

run_optional "05_ioreg_vhda" ioreg -r -n VoodooHDADevice -l
# Per-engine state snapshot. IOAudioEngineState=2 means the engine is
# actively performing IO; IOAudioStreamNumClients>0 shows coreaudiod is
# attached. This is what tells us which engine the user is actually playing
# through, regardless of which VoodooHDADevice owns it.
run_optional "05a_ioreg_engines" ioreg -r -n VoodooHDAEngine -l
run_optional "06_kextstat_vhda" kextstat

echo "Start playback now if the issue requires active audio. Sampling every ${SAMPLE_INTERVAL}s for ${SAMPLE_SECONDS}s..." \
	| tee "$OUT_DIR/07_instruction.txt"

# Continuous sampling. We loop for SAMPLE_SECONDS of wallclock time, taking
# a per-service snapshot each iteration. Each snapshot is appended to a
# timeline file with a timestamp so a stream that only runs for a fraction
# of a second still shows up at least once.
END_TS=$(($(date +%s) + SAMPLE_SECONDS))
ITER=0
for SVC in $SERVICE_INDEXES; do
	echo "" > "$OUT_DIR/08_timeline_svc${SVC}.txt"
done
while [ "$(date +%s)" -lt "$END_TS" ]; do
	ITER=$((ITER + 1))
	NOW=$(date '+%H:%M:%S.%N' 2>/dev/null || date '+%H:%M:%S')
	for SVC in $SERVICE_INDEXES; do
		{
			echo "--- iter=$ITER ts=$NOW service=$SVC ---"
			"$VHDA_DIAG" --service="$SVC" get all
		} >> "$OUT_DIR/08_timeline_svc${SVC}.txt" 2>&1
	done
	sleep "$SAMPLE_INTERVAL"
done

# After-playback per-service snapshots (for residual state diff).
for SVC in $SERVICE_INDEXES; do
	run_capture "10_channels_after_svc${SVC}" "$VHDA_DIAG" --service="$SVC" list
	run_capture "11_telemetry_after_svc${SVC}" "$VHDA_DIAG" --service="$SVC" get all
done

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
echo "Sampled $ITER iteration(s) across services: $SERVICE_INDEXES"
