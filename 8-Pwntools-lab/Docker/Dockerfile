FROM hackinglab/alpine-base:3.2.0
LABEL maintainer=<ivan.buetler@hacking-lab.com>
MAINTAINER Ivan Bütler <ivan.buetler@hacking-lab.com>

ADD root /

RUN apk add --no-cache --update \
    unit \
    gcc \
    libc-dev \
    socat \
    curl && \
    rm -rf /var/cache/apk/* && \
    chown -R root:root /opt/www

WORKDIR /compile
RUN gcc -Wl,-z,norelro -fno-stack-protector -o server server.c

EXPOSE 1345
