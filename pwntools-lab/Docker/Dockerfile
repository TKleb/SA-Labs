FROM hackinglab/alpine-base:3.2.0

LABEL maintainer=<ivan.buetler@hacking-lab.com>

COPY root/ /
RUN apk update && apk add --no-cache socat unit sudo curl python3
RUN cp /app/server /opt/www && \
    chmod +x /entry.sh /app/server

EXPOSE 80 1345