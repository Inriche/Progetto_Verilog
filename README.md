\# Verilog Vending Machine



Digital design project implemented in Verilog.



The project models a vending machine controller with two functionally equivalent implementations:



\* behavioral implementation

\* structural implementation with FSM/datapath separation



The repository also includes simulation outputs and generated artifacts produced during verification.



\## Main Features



\* coin insertion management

\* product selection

\* credit tracking

\* product availability check

\* insufficient credit handling

\* transaction cancellation

\* change calculation

\* greedy change-return logic

\* behavioral vs structural equivalence testing



\## Project Structure



```text

vending-machine-verilog/

├── behavioral/

│   ├── vending\_behavioral.v

│   └── tb\_behavioral.v

├── structural/

│   ├── vending\_structural.v

│   ├── vending\_fsm.v

│   ├── GreedyLogic.v

│   ├── components.v

│   └── tb\_structural.v

├── risultati/

├── obj\_dir/

├── testbench.v

├── compile.sh

├── Relazione.pdf

├── datapath\_finale.png

├── simulazione\_behavioral.vcd

├── simulazione\_structural.vcd

└── simulazione\_comparison.vcd

```



\## Build and Simulation



The project uses Verilator.



```bash

cd vending-machine-verilog

chmod +x compile.sh

./compile.sh

```



The script builds and runs three simulations:



\* behavioral model simulation

\* structural model simulation

\* behavioral vs structural comparison



The comparison testbench checks the functional equivalence between the two implementations.



\## Generated Artifacts



The repository intentionally includes generated files such as:



\* `obj\_dir/`

\* `.vcd` waveform files

\* synthesis and simulation reports



These files are kept to document the verification process and make the project easier to inspect without regenerating every artifact.



\## Tools



\* Verilog

\* Verilator

\* Yosys

\* Bash

\* Git / GitHub



\## Notes



This repository is organized as a portfolio version of the university project. Identifying student IDs have been removed from public folder and archive names.



