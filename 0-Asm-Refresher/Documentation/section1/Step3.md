# Sections
An assembly program can be divided into 3 sections: **data**, **bss** and **text**. 

- **data section**: The data section is used for declaring initialized data or constants. Content in this section does not change at runtime. Examples could be constant values, file names or buffer sizes.
- **bss section**: This section is used for declaring variables.
- **text section**: In here is where the actual code is stored. When using gcc, this section must begin with the declaration of ```global main``` which tells the kernel where the program execution begins.