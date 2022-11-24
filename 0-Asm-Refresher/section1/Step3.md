# Hello World
Now that you have an understanding of the GPR, continue with nearly every programmers first excercise: a **Hello World** program.

1. Start your linux workstation
2. Create a ```helloworld.asm``` file
3. Create two sections inside the file: ```section .text``` and ```section .data```. 
4. Inside the .data section, initialize a constant variable for the hello world string: ```message: db "Hello World!", 0xA``` *(Note: 0xA it the ASCII-Code for new line)*
5. Declare a new constant variable called ```message_length``` with the following value: ```equ $-message```. This line calculates the length of the message variable by subtracting the memory address of the message from the current memory address.
6. Next up is creating the entry point and begin with coding the logic. Go to the ```.text``` section and declare the start with ```global main```. Now define start on a new line using: ```main:```
7. Since the goal is printing text onto the screen, have a look at the corresponding syscall to see its signature. Look up the man page of the write function: ```man 2 write```
8. You now see that the function takes three arguments. Start with coding the function call with the correct parameters:


        mov eax, 0x4            ; defines the desired syscall (write)
        mov ebx, 1              ; first parameter (fd) use stdout
        mov ecx, message        ; second parameter (*buf) use message
        mov edx, message_length ; third parameter (count) use length of message
        int 0x80                ; invoke syscall
	Note that that when invoking a syscall, the eax register defines which one to call.
9. Now try to find out how to stop execution (exit) of the program also using a syscall. You can get a list of available syscalls using: ```cat /usr/include/x86_64-linux-gnu/asm/unistd_32.h```
10. Compile the program using: ```nasm -f elf helloworld.asm```. This will give you an object file: ```helloworld.o```.
11. Link the object file using:  ```gcc -m32 -o helloworld helloworld.o```
12. Finally execute your program: ```./helloworld```
13. You now have written a functioning hello world in assembly.