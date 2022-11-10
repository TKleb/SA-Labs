# GDB Analysis
As a first step, we analyze the same binary from the previous excercise - but dynamically.

(Download pwndbg extension for GDB https://github.com/pwndbg/pwndbg)

1. Open up a terminal at the same location you have the binary file from the previous excercise stored. 
2. Type gdb p1.exe
3. Set a breakpoint on main using: ```break *main``` and run the program using ```run```
4. Step through the executable using: ```si``` for "step into" or ```ni``` for "next instruction" 
5. Stepping through the debugger you'll find ```printf```, ```scanf``` and ```strcmp``` calls. Step through the code until you reach a ```strcmp``` call. You can also set a breakpoint on the address where strcmp gets called: 
   
   ![Address of strcmp](../../images/AddrOfStrcmp.png)
   In this case the command would be ```break *0x5555555551a1```. And to continue execution, you may enter: ```c```.
6. The execution of the program now stopped at the ```strcmp``` call. Analyzing the assembly code, you can see that the two arguments needed for ```strcmp``` were moved into the registers rsi and rdi. Have a look at the registers now:

	![Strcmp register parameters](../../images/strcmpRegisters.png)
	
	Et voilà! The RDI register holds your input while RSI has the key it compares against (in this case, our flag).