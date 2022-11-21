# GDB Upgrades
GDB is a debugger framework that allows you to build your own tools.And there are multiple python based plugins for GDB. 
- [GEF](https://hugsy.github.io/gef/)
- [PEDA](https://github.com/longld/peda)
- [pwndbg](https://github.com/pwndbg/pwndbg)

# GEF
Installing GEF is simple, just run:
```sh
bash -c "$(curl -fsSL https://gef.blah.cat/sh)"
```
and it will be automatically installed. To see if it worked just run gdb on the binary again and you see a new layout. Check out the documentation above for more information.

# PEDA (Python Exploit Development Assistance for GDB)
This tool also allows you to have a better layout of GDB with the addition of commands. Install it with:
```sh
git clone https://github.com/longld/peda.git ~/peda
echo "source ~/peda/peda.py" >> ~/.gdbinit
```
For more information check out the above linked documentation / github page.

# pwndbg 
Pwndbg has features that improve on the other modules for dbg and was created to replace them, but also to have a clean implementation that runs quickly and is resilient against all the weird corner cases that come up. 

The installation is rather simple:
```sh
git clone https://github.com/pwndbg/pwndbg
cd pwndbg
./setup.sh
```
Pwndbg is supported on Ubuntu 18.04, 20.04, and 22.04 with GDB 8.1 and later. For more information feel free to read the github page linked above.
