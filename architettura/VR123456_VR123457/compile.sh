#!/bin/bash

# ============================================================
# SCRIPT DI COMPILAZIONE E SIMULAZIONE
# Specifiche di progetto [1], [2]
# ============================================================

# 1. Preparazione dell'ambiente
echo "--- Pulizia e creazione cartella obj_dir ---"
rm -rf obj_dir
mkdir -p obj_dir

# ============================================================
# PARTE A: Modello BEHAVIORAL
# ============================================================
echo ""
echo "--- Compilazione Modello Behavioral ---"
# Compila il modulo e il testbench generando l'eseguibile in obj_dir/behavioral
iverilog -o obj_dir/behavioral behavioral/vending_behavioral.v behavioral/tb_behavioral.v

if [ $? -eq 0 ]; then
    echo "Compilazione Behavioral: SUCCESSO"
    echo "--- Esecuzione Simulazione Behavioral ---"
    # Esegue la simulazione
    vvp obj_dir/behavioral
    
    echo "Generato file di tracce: simulazione_behavioral.vcd"
else
    echo "Compilazione Behavioral: FALLITA"
    exit 1
fi

# ============================================================
# PARTE B: Modello STRUCTURAL (Da scommentare in seguito)
# ============================================================
# echo ""
# echo "--- Compilazione Modello Structural ---"
# iverilog -o obj_dir/structural structural/vending_structural.v structural/tb_structural.v
# vvp obj_dir/structural

# ============================================================
# PARTE C: Confronto (COMPARISON) (Da scommentare in seguito)
# ============================================================
# echo ""
# echo "--- Esecuzione Testbench di Confronto ---"
# iverilog -o obj_dir/comparison testbench.v behavioral/vending_behavioral.v structural/vending_structural.v
# vvp obj_dir/comparison

echo ""
echo "=== FINE SIMULAZIONE ==="