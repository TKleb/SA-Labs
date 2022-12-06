FROM hackinglab/alpine-base-hl:3.2.0

LABEL maintainer=<ivan.buetler@hacking-lab.com>

COPY root /
RUN apk update && apk add --no-cache socat unit sudo curl python3 xdelta3

RUN apk fetch unit-php*
RUN apk add --no-cache unit-php*

RUN exec chown -R unit /opt/www/uploads
RUN exec chmod 300 /opt/www/uploads

EXPOSE 80
