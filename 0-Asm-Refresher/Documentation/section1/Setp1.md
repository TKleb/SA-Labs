# General-Purpose Registers (GPR)
For the scope of this course, we'll focus on the 8 GPR introduced by x86:

| Name | Function																					|
|------|--------------------------------------------------------------------------------------------|
| EAX  | The accumulator register. Used in arithmetic operations									|
| ECX  | The counter register. Used for counting e.g. in loops										|
| EDX  | The data register. Used in arithmetic and I/O operations									|
| EBX  | The base register. Used as a pointer to data												|
| ESP  | The stack pointer register. Pointing at the top of the stack								|
| EBP  | The stack base pointer register. Pointing at the base of the stack							|
| ESI  | The source index register. Used as a pointer to a source in stream operations				|
| EDI  | The destination index register. Used as a pointer to a destination in stream operations 	|

The listed registers are all 32-bit large. On 64-bit operation systems, the registers start with the letter "R" instead of "E", so for example the 64-bit extension of **eax** is called **rax**.

You may encounter the usage of a 32-bit register when reverse engineering a 64-bit executable. In this case, the program is interacting with just the lower 32 bits of the register and ignores the higher 32 bits. This can also be done with the lower 16 or 8 bits.