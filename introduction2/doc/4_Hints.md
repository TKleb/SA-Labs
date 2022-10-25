# Hints

  **Tutorial: Finding Main**
  1. Make sure you still have the "start" function open by selecting it on the left side inside the functions window.
  2. Because at the end of the Program the return value of the main will get returned to the OS you can look where the eax value will get set before the program terminates.
  3. Based on this information you will want to open the last call and look at the end of that function.
  4. you will see that the eax will be written to the ebx and before that another call happens.
  5. If you look inside this call you will find the main function.
