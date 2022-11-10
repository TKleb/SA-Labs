# Finding Main

1. Make sure you have the "start" function open by selecting it on the left side inside the functions window.
2. At the end of a Program the return value of "main" will get returned to the OS, therefore you can follow the execution flow to where the eax value will get set, before the program terminates. Based on this information you will want to open the last call and look at the end of that function.
3. You will see that the eax will be written to the ebx and before that another call happens.
4. If you look inside this call you will find the main function.

Alternatively you can also look for 3 Arguments that are passed before the main is called. Because the main will always need 3 Arguments.
