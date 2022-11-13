# GDB Upgrades
GDB is a debugger framework that allows you to build your own tools.And there are multiple python based plugins for GDB. 
- [GEF](https://hugsy.github.io/gef/)
- [PEDA](https://github.com/longld/peda)

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
