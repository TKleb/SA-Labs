# GDB Commands
Below you see a list of commonly used GDB commands and what they do. For a list of all available commands visit [this site](http://www.gdbtutorial.com/gdb_commands). 

| Command    | Description       |
| -----      | -----             |
| r          | Start running program until a breakpoint or end of program                   |
| b  fun     | Set a breakpoint at the begining of function "fun"                           |
| b N        | Set a breakpoint at line number N of source file currently executing         |
| b file.c:N | Set a breakpoint at line number N of file "file.c"                           |
| d N        | Remove breakpoint number N                                                   |
| info break | List all breakpoints                                                         |
| c          | Continues/Resumes running the program until the next breakpoint or end of program                                                                                     |
| f          | Runs until the current function is finished                                  |
| s          | Runs the next line of the program                                            |
| s N        | Runs the next N lines of program                                             |
| n          | Like s, but it does not step into functions                                  |
| p var      | 	Prints the current value of the variable "var"                              |
| set var=val| Assign "val" value to the variable "var"                                     |
| bt         | Prints a stack trace                                                         |
| q          | Quit from gdb                                                                |