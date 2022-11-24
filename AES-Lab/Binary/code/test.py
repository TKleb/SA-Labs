#!/usr/bin/python3
from pwn import *
import re
from string import printable

# elf = ELF("./server")
# p1 = elf.process()
p1 = remote("localhost", 1345)

p1.recvuntil(b":") 

p1.sendline(b'a' * (15))
base_block = re.findall('[A-Za-z0-9+\/=]{64}', p1.recvuntil(b":").decode('utf-8'))[0]
print(base_block)
# log.info('Base : {}'.format(base_block))
for c in printable:
    payload = 'a' * (15) + c
    p1.sendline(payload)
    # log.info("Payload: {}".format(payload))
    block = re.findall('[A-Za-z0-9+\/=]{64}', p1.recvuntil(b":").decode('utf-8'))[0]
    # log.info(block)
    if block == base_block:
        print('--> {}'.format(c))
        break
