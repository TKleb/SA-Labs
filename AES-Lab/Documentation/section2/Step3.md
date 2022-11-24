# Get the Key - Write Script to get first letter
You can either write it on your own or follow this guide. The script is written in python using pwntools.\
What does the script need to do?\
- Connect to the exposed port
- Send a 15 byte message as reference
- Send a 15 byte message with a random character appended until it matches the reference
- Safe the found character