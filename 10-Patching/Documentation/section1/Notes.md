if: input file
bs: block size
count: how many bytes
skip: skip bytes
hexdump -C: print as hex with big endian
dd if=calculator bs=1 count=2 skip=$((0x4E5E)) | hexdump -C

printf "%b" '\xDE\xE9' > patch.bin
cat patch.bin | dd conv=notrunc of=calculator bs=1 seek=$((0x4E5E))


https://c9x.me/x86/html/file_module_x86_id_81.html
https://c9x.me/x86/html/file_module_x86_id_121.html