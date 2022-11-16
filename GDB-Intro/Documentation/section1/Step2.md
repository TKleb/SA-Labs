# Installing GDB
If youre using the Hacking-Lab Kali CD then you wont need to install GDB because its already preinstalled. 

To check if GDB is installed just run:
```sh
$ gdb --version
```
You can either install the pre-built gdb binaries or download the source code of GDB, compile it and install,
#  Pre-built GDB Binaries
You can install gdb on Debian-based linux distro (e.g. Ubuntu, Mint, etc) by following command: \
```sh
$ sudo apt-get update
$ sudo apt-get install gdb
```

# Source Code of GDB

Download the source code from the [GDB site](https://ftp.gnu.org/gnu/gdb/)
```sh
$ wget "http://ftp.gnu.org/gnu/gdb/<folder.tar.gz>"
```
Extract it
```sh
$ tar -xvzf folder.tar.gz
```
Configure and Compile it (this takes a while).
```sh
$ cd <file>
<file>$ ./configure
<file>$ make
```
Once finished you can locate the binary at \<file>/gdb/gdb. \

Install GDB
```sh
$ make install
```
By default this will install gdb binaries in /usr/local/bin and libs in /usr/local/lib
