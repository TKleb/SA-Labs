# e-encoded-file-challenge (b4361c6e-1322-4086-adb8-0cb3338dfd42)
This docker is based on the Alpine Base image of the Hacking-Lab CTF system.
This docker provides nothing (only base for other images).

## Customizing
- Put your application somewhere in the ./root/ folder
- Write a s6 startup script and put it into ./root/etc/services.d/{YOUR_SERVICE}/run

## GitHub
See [hacking-lab/alpine-base](https://github.com/Hacking-Lab/alpine-base/) for full information information.

## Building & testing
- Build and run: `docker-compose up --build`
- Deploy: `./prepare.sh`, then upload `dockerfiles.tar.gz`
