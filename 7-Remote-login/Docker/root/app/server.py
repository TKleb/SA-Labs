#!/usr/bin/env python3
import os

def printFlag():
	flag = open("/flag.txt", "r")
	print("Success! The Flag is: ", flag.read())

def calcChecksum(input):
	checksum = 0
	for c in input:
		checksum += ord(c)
	return checksum

def validateCredentials(name, pw):
	decPw = ""
	for c in pw:
		decPw += chr((ord(c) ^ 0x4b))
	return (calcChecksum(decPw) == calcChecksum(name))

while True :
	os.system('clear')
	username = input("Please enter your username: ")
	password = input("Please enter your password: ")

	if not username or not password:
		continue

	if not validateCredentials(username, password):
		print("Couldn't login with given credentials")
		input("Press Enter to retry...")
		os.system('clear')
		continue

	printFlag()
	break
