# Instructions
The following list gives an overview of the assembly instructions you'll encounter the most while reverse engineering:

| Instruction    | Description                                                                               |
|----------------|-------------------------------------------------------------------------------------------|
| mov src, dest  | Copy src to dest                                                                          |
| add src, dest  | dest = dest + src                                                                         |
| sub src, dest  | dest = dest - src                                                                         |
| inc dest       | Increment dest                                                                            |
| dec dest       | Decrement dest                                                                            |
| call label     | Call a function (and push eip)                                                            |
| ret            | Return from a function (and pop eip)                                                      |
| push item      | Push item (constant or register) onto the stack                                           |
| pop \<reg\>    | Pop item from stack and optionally save it into a register                                |
| xor src, dest  | dest = src ^ dest; This is often used to clear a register: xor eax, eax will set eax to 0 |
| cmp arg1, arg2 | Compares arg1 to arg2; Must precede any conditional jump instruction                      |
| je label       | Jump to label if arg1 == arg2 (if **e**qual)                                              |
| jne label      | Jump to label if arg1 != arg2 (if **n**ot **e**qual)                                      |
| jg label       | Jump to label if arg2 > arg1 (if **g**reater)                                             |
| jl label       | Jump to label if arg2 < arg1 (if **l**ess)                                                |
| test reg, imm  | Bitwise compare of register and constant; must precede the jz or jnz instructions         |
| jz             | Jump to label if bits were not set (if **z**ero)                                          |
| jnz            | Jump to label if bits were set (if **n**ot **z**ero)                                      |
| nop            | No-op (no operation)                                                                      |

References for further study: [Intel x86 instructions](https://scadahacker.com/library/Documents/Cheat_Sheets/Programming%20-%20x86%20Instructions%201.pdf), 
[x64 Cheat Sheet](https://cs.brown.edu/courses/cs033/docs/guides/x64_cheatsheet.pdf)
