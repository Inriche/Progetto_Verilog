# Scope
- Work only in this repo.
- Do not use other project context.
- Do not assume missing files, modules, ports, signals, or states.

# Source of truth
- Use the project PDF in this repo as the requirements source.
- If code and PDF conflict, report it before editing.

# Editing
- Make the smallest safe fix.
- Do not rewrite whole files unless asked.
- Do not rename files, modules, or interfaces unless required.
- Do not change folder structure.
- Do not edit generated files (`obj_dir`, `.vcd`).

# Behavioral vs structural
- Keep behavioral code behavioral.
- Keep structural code structural.
- Do not mix them unless asked.
- Do not break equivalence between them.

# Verilog rules
- Do not invent modules, ports, signals, states, or helper files.
- Do not duplicate module declarations or `include`s.
- Preserve FSM behavior.
- Preserve existing naming unless required to change it.

# Workflow
- First find root cause.
- Then make minimal fix.
- Then run compile/test.
- If unsure, say unsure. Do not guess.
- Do not claim success without a real compile or simulation result.

# Validation
- Prefer `compile.sh`.
- If `compile.sh` is broken, explain why before using other commands.

# Output
Use this format:
1. root cause
2. fix
3. compile/test