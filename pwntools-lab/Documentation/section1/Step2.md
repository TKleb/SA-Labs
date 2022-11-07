# Find the buffersize
## Vulnerability
You can skip ahead to "Installing pwntools" if you found the vulnerability yourself. 

The vulnerable function which is exploitable is: ```scanf()```. The function has a predefined size buffer and using ```%s``` to read the input doesn't check the length of the inputted string. If the user enters a string longer which would exceed the buffer size it would overflow and allows to reach addresses which weren't meant to be reached. 

## Installing pwntools
Follow the instruction on in the [documentation](https://docs.pwntools.com/en/stable/install.html) of pwntools to install it on your VM. To use the Command-Line Tools of pwntools you have to add it to the PATH which is done by opening ```.zshrc``` (file from which interactive shells read commands) in /\<user> and add "export PATH="/home/\<user>/.local/bin:$PATH" at the end. Restart your terminal. Then check if your Command-Line Tools work by entering ```pwn``` in your terminal. 

## Find the buffersize
Finding the buffersize can be done by bruteforcing it with string which is increased each iteration. Pwntools has some tools to make it more interesting. Check out the [documentation](https://docs.pwntools.com/en/stable/commandline.html) for an overview of Command-Line Tools.

Start by generating a string using ```pwn cyclic 40```. This returns you a the first 40 characters of a predefined string. This is useful for finding out the buffer size since a certain response can be looked up.

echo the string into the binary with ```echo "<cyclic_string>" | ./<file_name>```.

You will get a Segmentation Fault which you can check with ```sudo dmesg | tail``` (Prints the tail of the message buffer of the kernel). You will see a message similar to "segfault at XXXX". 

Enter ```pwn cyclic -l 0x<XXXX>``` into your terminal to get the buffer size. This command looks up the value you gave it in the predefined string. 







