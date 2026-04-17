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
    shift 5

    echo "$label"
    rm -rf "$build_dir"
    rm -f "$vcd_file"

    verilator --trace --timing --binary "$@" \
        --top-module "$top" \
        --Mdir "$build_dir" \
        -o "../$name"

    "./obj_dir/$name"

    if [[ ! -f "$vcd_file" ]]; then
        echo "Missing expected VCD: $vcd_file" >&2
        exit 1
    fi
}

mkdir -p obj_dir

run_build "behavioral" "tb_behavioral" "obj_dir/behavioral.dir" "simulazione_behavioral.vcd" "[1/3] behavioral" \
    behavioral/vending_behavioral.v \
    behavioral/tb_behavioral.v

run_build "structural" "tb_structural" "obj_dir/structural.dir" "simulazione_structural.vcd" "[2/3] structural" \
    structural/tb_structural.v \
    structural/vending_structural.v \
    structural/vending_fsm.v \
    structural/GreedyLogic.v

run_build "comparison" "testbench" "obj_dir/comparison.dir" "simulazione_comparison.vcd" "[3/3] comparison" \
    testbench.v \
    behavioral/vending_behavioral.v \
    structural/vending_structural.v \
    structural/vending_fsm.v \
    structural/GreedyLogic.v

echo "done"
