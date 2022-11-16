# Example
As mentioned before, debugging is an important tool in reverse engineering which is why we go through a simple example. \
To get started, download the artifact from ```RESOURCES``` and open it in gdb using ```gdb license```. 

Before starting, we need to change the disassembly style to Intel (for a better readability).
```sh
set disassembly-flavor intel
```
Next you can look at all the functions of the binary using
```sh
info functions
```
Which should give a similar output to

![Functions](../Images/gdb1.png)

The most important function of them is the main function. You can disassemble it by entering:
```sh
disassemble main
```
This will dump the assembly code of the main function:

![Assembly](../Images/gdb2.png)

You can see that the strcmp function is called at address ```0x401176``` (This might be different to your address).

To better understand the state at the time the function is called we set a breakpoint there with 
```sh
b *0x401176
```

Now you can run the code with an arbitrary argument:
```sh
run test
```
and see it hitting the breakpoint:

![Breakpoint](../Images/gdb3.png)

To see the different registers use the command
```sh
info registers
```

![Rgisters](../Images/gdb4.png)

From the assembly, it can be noted that the user input (from the command line arguments) is stored in the rax register. And the strcmp function compares the rax register with the rdx register, which must mean that the rdx register must contain the required string. On examining both the registers (rax, rdx). We get the required input!

![RAX](../Images/gdb5.png)

![Final](../Images/gdb6.png)




