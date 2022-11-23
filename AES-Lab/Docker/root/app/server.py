#!/usr/bin/python3
import sys
import os
from Crypto.Cipher import AES
from base64 import b64encode

blocksize = 16 
flag = open('/app/flag.txt', 'rb').read().strip()
key = open('/app/key.txt', 'r').read().strip().encode()

def encrypt(plaintext):
    cipher = AES.new(key, AES.MODE_ECB)
    ciphertext = cipher.encrypt(padding(plaintext+key))
    result = b64encode(ciphertext).decode('utf-8')
    return result

def padding(plaintext):
    while (len(plaintext) % blocksize) != 0:
        plaintext += b'0'
    return (plaintext)

def main():
    print('AES-ECB')
    while(True):
        message = input('Enter plaintext:\n').strip()
        plaintext = flag + str.encode(message)
        ciphertext = encrypt(plaintext)
        print(ciphertext)

if __name__ == '__main__':
    main()