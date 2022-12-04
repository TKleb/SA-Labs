FROM hackinglab/alpine-base:3.2.0

LABEL maintainer=<ivan.buetler@hacking-lab.com>

COPY root /
RUN apk update && apk add --no-cache socat unit sudo curl python3 xdelta3

RUN apk fetch unit-php*
RUN apk add --no-cache unit-php*

RUN chmod 777 /opt/www/uploads
RUN mkdir /usr/tmp/

EXPOSE 80