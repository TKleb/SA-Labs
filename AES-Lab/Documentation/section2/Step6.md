# Get Flag - Use found key to decrypt the flag
To decrypt the the message and get the flag the whole encryption process has to be reversed. \
Looking at the script shows that the message gets first run throught the AES cipher and then encrypted with base64. 

For the script it means that it has to:
- Get a reference output
- Decode base64
- Decrypt it with the given key

Try to code it yourself using pwntools again. The next step would show you an example solution.

