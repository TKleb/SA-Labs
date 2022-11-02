#!/usr/bin/env python3
import os

def printFlag():
	print("Success! The Flag is: compilers")

def validateCredentials(name, pw):
	return (name == "Syrson" and pw == "12345")

while True :
	os.system('cls')
	username = input("Please enter your username: ")
	password = input("Please enter your password: ")

	if not validateCredentials(username, password):
		print("Couldn't login with given credentials")
		input("Press Enter to retry...")
		os.system('cls')
		continue

	printFlag()
	break

