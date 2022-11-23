
from base64 import b64decode
from pwn import *
from Crypto.Cipher import AES

elf = ELF("./server")
conn = elf.process()

ciphertexts = []

def sendAndRecieve(line):
	conn.recvuntil(b":").decode()
	conn.sendline(line)
	conn.recvline()
	return conn.recvline().decode().strip()

for i in range(15, 0, -1):
	pad = b"\x00" * i
	ct = b64decode(sendAndRecieve(pad))[-32:-16]
	ciphertexts.append(ct)
	print(f"Pad {15 - i}: {pad.hex()} -> Ciphertext: {ct.hex()}")

ct = b64decode(sendAndRecieve(b""))[-32:-16]
ciphertexts.append(ct)

key = b""
for i in range(len(key), len(ciphertexts)):
	pad = b"\x00" * (15 - i) + key
	ciphertext = ciphertexts[i]
	# print(f"Pad {15 - i}: {pad.hex()} -> Ciphertext: {ciphertext.hex()}")
	for j in range(32, 127):
		if chr(j) != chr(j).strip(): continue
		ct = b64decode(sendAndRecieve(pad + bytes([j])))[-32:-16]
		# print(f"\tTrying pad: {(pad + bytes([j])).hex()} -> Ciphertext: {ct.hex()}")
		if ct == ciphertext:
			key += bytes([j])
			print(key)
			break