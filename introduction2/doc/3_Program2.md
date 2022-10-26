## Static Analysis without Debug Information
1. Download the second [program](../binary/release/p2.exe).
2. Open the Program in IDA.
3. Use the default settings to Load the new file.
4. This time IDA won't find any Debug Information and because of this you won't immediately find yourself in the main function. It just opens the "start" function which contains everything the program will do including the normal setup things C does. This makes finding "main" a challenge itself.
5. Use some time to think about how you would try to find the main function and then try it out.
6. If you can't find it yourself use the Help provided to find main.

Usually the programs you want to reverse don't come with Debug Information. That's why it's very important to understand how to find the main function.