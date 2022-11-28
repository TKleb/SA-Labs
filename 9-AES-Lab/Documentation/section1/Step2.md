# Analyze the Script - Solution
# Where does it get the flag from?
The flag gets read from a file called "flag.txt".

# Where does it get the key from?
The key, similar to the flag is read from a file called "key.txt".

# What does the main function do?
The main function waits for an input and appends it to the read flag (both in bytes) [row 25 - 26]. After appending the flag to the user input the text gets encrypted using the above [row 11] function. This function returns an encrypted text which at the end gets printed to the terminal.

# How is it encrypted?
Understanding the encryption is the most important part in cracking it. 
- [row 11]: "Encrypt" takes the plaintext generated in main as parameter. 
- [row 12]: The function first generates a cipher using the key. In the brackets you can see the mode used (ECB) which gets explained in step 3. 
- [row 13]: The given plaintext then gets encrypted together with the key using the generated cipher.
- [row 17]: To guarantee the blocksize for the encrpytion the plaintext and key pair is put into the padding function. This ensures the blocksize of 16 bytes and adds b"0" to fill.
- [row 14]: To further obfuscate the resulting ciphertext is run through a base 64 encoding.
- [row 15]: And returned at the end.

# How to get the key?
As described above, the key is added to the plaintext in the encoding function. The rather simple ECB encoding can be exploitet to find out the key

# How to get the flag?
Once the key is known it is just a matter of reversing the "encrypt" function by first decode the base 64 encoded string and then run it through the cipher with the found key.

After analyzing the script you can see that to get the flag at the end you have to first find the key, then decrypt the response and at the end run it through a base 64 decoding to get the flag.
