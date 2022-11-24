# Get the Key - Understanding how the script functions
Start the script either locally or connect to the exposed port using netcat.

Test different inputs and their resulting encryption.
```sh
AES-ECB
Enter plaintext:

kDbv+8UYYCFGq35NRU8jcgBy7NcyFMq0nwPaJfUPomk9WtJGfF5wfjKzcJWh1sSs
```
Which length does the output have (remember the base64 encoding)?\
Using python you can determine it:
```python3
>>> from base64 import b64decode
>>> len(b64decode("kDbv+8UYYCFGq35NRU8jcgBy7NcyFMq0nwPaJfUPomk9WtJGfF5wfjKzcJWh1sSs"))
48
```
Knowing the used AES encryption shows that the output (the flag + the key together) consists of 3 blocks. Whith this output we don't know the size of them yet.

Which part of the output is the flag?\
This can be determined by entering random values into the script and check which part stays the same:
```sh
AES-ECB
Enter plaintext:
a
kDbv+8UYYCFGq35NRU8jcgBy7NcyFMq0nwPaJfUPomkx18d0IW4GZKmLw5jP6Iaqt3OfWgWheEOV3q2TU00yVQ==

Enter plaintext:
aa
kDbv+8UYYCFGq35NRU8jcgBy7NcyFMq0nwPaJfUPomkPdR9zSQ6xAX068f733cI+jjLEM7e6IWEErgv3qYmMzw==

Enter plaintext:
aaa
kDbv+8UYYCFGq35NRU8jcgBy7NcyFMq0nwPaJfUPomm3ngszAjvyc0fyu4SKpWtgsxS06HWgnlcM9Tj4buwfDg==

Enter plaintext:

kDbv+8UYYCFGq35NRU8jcgBy7NcyFMq0nwPaJfUPomk9WtJGfF5wfjKzcJWh1sSs
```
Comparing the different outputs of the test it is visible that the part after .. fuPom .. is the input-key pair and everything before is the flag. The assumption, that the flag is 32 byte long can be made since the first part of the output (the flag) doesn't change regardless of the given input. 

As learned before this AES encryption encrypts the code block for block and if a block doesnt change it stays the same (as long as the key stays the same).
