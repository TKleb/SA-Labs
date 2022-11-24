# Get the Key - How to decrypt the key
Know that the output and how its built is clear, it is time to crack the cipher and get the key.

For simplicity, we assume that both the message (input) and the key are of one block length (The attack applies for smaller and bigger keys too). The script takes both and appends the key to the message then encrypts it.
For the explanation a string consisting of 16 "A"s is used:
```
    Message             Key

AAAAAAAAAAAAAAAA  BCDEFGHIJKLMNOPQ
       |                 |
       |                 |
       v                 v
---CIPHERTEXT1--  ---CIPHERTEXT2--
```
This means that ciphertext 1 is known since it results from the input which can be controlled. Ciphertext 2 on the other hand is unknown. It is not possible for us to find out ciphertext 2 using ciphertext 1. 

But what happens when the inputted message is 1 byte shorter?\
Since the script appends the key to the message, the first byte of the key will be in ciphertext 1 and a 0-padding will be added to the ciphertext 2.
```
    Message             Key

AAAAAAAAAAAAAAAB  CDEFGHIJKLMNOPQ0
       |                 |
       |                 |
       v                 v
---CIPHERTEXT1--  ---CIPHERTEXT2--
```
But even knowing the other 15 bytes of the ciphertext doesn't allow for an encryption. 

This idea to get the key is called "Byte by Byte"-attack.

