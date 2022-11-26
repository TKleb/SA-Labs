#!/usr/bin/python3
from pwn import *
from Crypto.Cipher import AES
from base64 import b64decode

key = '4a-4eca-9ee9-b16'

p2 = remote("localhost", 1345)

p2.sendlineafter(b':\n', b' ' * 16)
ciphertext = b64decode(p2.recvuntil(b"\n").decode().strip())
cipher = AES.new(key.encode(), AES.MODE_ECB)
plaintext = cipher.decrypt(ciphertext)
print(plaintext[0:32])
