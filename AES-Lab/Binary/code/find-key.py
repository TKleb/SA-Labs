#!/usr/bin/python3
from pwn import *
import re
from string import printable
from Crypto.Cipher import AES

# elf = ELF("./server")
# p1 = elf.process()
p1 = remote("localhost", 1345)

p1.recvuntil(b":")

key = '' 

for i in range(len(key) + 1,17):
    p1.sendline(b'a' * (16 - i))
    base_block = re.findall('[A-Za-z0-9+\/=]{64}', p1.recvuntil(b":").decode('utf-8'))[0]
    log.info('Base : {}'.format(base_block))
    for c in printable:
        p1.sendline('a' * (16 - i) + key + c)
        block = re.findall('[A-Za-z0-9+\/=]{64}', p1.recvuntil(b":").decode('utf-8'))[0]
        if block == base_block:
            key = key + c
            print('--> {}'.format(key))
            break

if len(key) == 16:
    log.info('Key found: {}'.format(key))

p1.close()
