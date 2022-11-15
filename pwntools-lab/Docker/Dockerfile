FROM i386/alpine AS builder
LABEL maintainer=<ivan.buetler@hacking-lab.com>
COPY root / 

RUN apk add --no-cache --update \
    unit \
    gcc \
    libc-dev \
    socat \
    curl && \
    rm -rf /var/cache/apk/* 

WORKDIR /compile
RUN gcc -m32 server.c -o server



FROM hackinglab/alpine-base:3.2.0
LABEL maintainer=<ivan.buetler@hacking-lab.com>
MAINTAINER Ivan Bütler <ivan.buetler@hacking-lab.com>

COPY root /
COPY --from=builder /compile/server /compile/server
COPY --from=builder /lib/ld-musl-i386.so.1 /lib/ld-musl-i386.so.1

RUN apk add --no-cache --update \
    unit \
    gcc \
    libc-dev \
    socat \
    curl && \
    rm -rf /var/cache/apk/* && \
    ls -al / > /ivan && \
    chown -R root:root /opt/www

