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

But the key can be found by a "Byte-by-Byte"-attack:
- Remember the output from the 15 byte long input
- Send 16 bytes with a known last byte and compare to the previous output
- Repeat for all possible inputs until one matches the desired output
- Shorten your "A"-string by one more (14) and add the found out byte to it to have the new 15 byte input
- repeat

It wouls look like this:
```
    Message             Key

AAAAAAAAAAAAAAAB  CDEFGHIJKLMNOPQ0
       |                 |
       |                 |
       v                 v
---CIPHERTEXT1--  ---CIPHERTEXT2--

============ NEXT ITERATION ============
    Message             Key

AAAAAAAAAAAAAABC  DEFGHIJKLMNOPQ00
       |                 |
       |                 |
       v                 v
---CIPHERTEXT1--  ---CIPHERTEXT2--

...

============ LAST ITERATION ============
    Message             Key

BCDEFGHIJKLMNOPQ  0000000000000000
       |                 |
       |                 |
       v                 v
---CIPHERTEXT1--  ---CIPHERTEXT2--
```
Note that it is not a normal bruteforce attack. A normal bruteforce attack would just try encrypting all possible values of M until it finds such value that C1 == C2. This would result in 256¹⁶ tries. What this attack does is decrypting one byte at a time. So it needs 256 * 16 tries, which is significantly smaller than 256¹⁶.


