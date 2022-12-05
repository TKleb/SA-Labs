# Introduction
![RE Overview](../images/overview.png)

Encryption is used everywhere to ensure the safety of data and information but encryptions have weaknesses which can be exploited. In this lab we will take a look at a certain mode of the AES encryption, how it works and how to find out the key to its secret.
Start the service from ```RESOURCES```. The docker is offering two ports (web and socket port).
- port 80
- port 1345
Find the flag by getting the key of the encryption.

# Goal
- Understand the weakness of AES ECB
- Find the flag using pwntools

# Feedback
Please fill out this [form](https://docs.google.com/forms/d/e/1FAIpQLSdHQhDCsN7ZUDzwbD5tXsgAap4m7eEFC8Ev5fdvg-aznMobQg/viewform?usp=sf_link) for feedback.

# Task
Understand the workings of AES ECB and how to exploit it by following the steps below
