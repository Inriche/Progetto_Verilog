#!/bin/bash

set -euo pipefail

ROOT_DIR="$(cd "$(dirname "$0")" && pwd)"
cd "$ROOT_DIR"

if [[ ! -f "behavioral/tb_behavioral.v" || ! -f "structural/tb_structural.v" || ! -f "testbench.v" ]]; then
    echo "compile.sh must be run from the project root: $ROOT_DIR" >&2
    exit 1
fi

run_build() {
    local name="$1"
    local top="$2"
    local build_dir="$3"
    local vcd_file="$4"
    local label="$5"
    local pass_message="$6"
    local expected_output="${7:-}"
    local log_file
    shift 7

    echo "$label"
    rm -rf "$build_dir"
    rm -f "$vcd_file"
    log_file="$(mktemp)"

    if ! verilator --trace --timing --binary "$@" \
        --top-module "$top" \
        --Mdir "$build_dir" \
        -o "../$name" >"$log_file" 2>&1; then
        cat "$log_file"
        rm -f "$log_file"
        exit 1
    fi

    if ! "./obj_dir/$name" >"$log_file" 2>&1; then
        cat "$log_file"
        rm -f "$log_file"
        exit 1
    fi

    if [[ -n "$expected_output" ]] && ! grep -Fq "$expected_output" "$log_file"; then
        cat "$log_file"
        rm -f "$log_file"
        echo "Missing expected output: $expected_output" >&2
        exit 1
    fi

    if [[ ! -f "$vcd_file" ]]; then
        rm -f "$log_file"
        echo "Missing expected VCD: $vcd_file" >&2
        exit 1
    fi

    echo "$pass_message"
    rm -f "$log_file"
}

mkdir -p obj_dir
mkdir -p risultati

run_build "behavioral" "tb_behavioral" "obj_dir/behavioral.dir" "simulazione_behavioral.vcd" "[1/3] behavioral" \
    "[PASS] behavioral simulation completed" \
    "" \
    behavioral/vending_behavioral.v \
    behavioral/tb_behavioral.v

run_build "structural" "tb_structural" "obj_dir/structural.dir" "simulazione_structural.vcd" "[2/3] structural" \
    "[PASS] structural simulation completed" \
    "" \
    structural/tb_structural.v \
    structural/vending_structural.v \
    structural/vending_fsm.v \
    structural/GreedyLogic.v

run_build "comparison" "testbench" "obj_dir/comparison.dir" "simulazione_comparison.vcd" "[3/3] comparison" \
    "[PASS] behavioral vs structural comparison: mismatch=0" \
    "done mismatch=0" \
    testbench.v \
    behavioral/vending_behavioral.v \
    structural/vending_structural.v \
    structural/vending_fsm.v \
    structural/GreedyLogic.v

echo "===================================="
echo "ALL TESTS PASSED"
echo "===================================="
echo "Generated reports:"
echo " - risultati/output_behavioral.txt"
echo " - risultati/output_structural.txt"
echo " - risultati/output_comparison.txt"
