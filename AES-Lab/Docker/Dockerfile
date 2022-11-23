FROM hackinglab/alpine-base:3.2.0

LABEL maintainer=<ivan.buetler@hacking-lab.com>

COPY root /
RUN apk update && apk add --no-cache \
    py3-pip \
    gcc \
    libc-dev \
    socat \
    unit \
    sudo \
    curl \
    python3

RUN pip install pycryptodome
RUN cp /app/server.py /opt/www && \
    chmod +x /entry.sh /app/server.py

EXPOSE 80 1345