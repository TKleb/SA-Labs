#!/bin/bash
UUID=13ccdd05-76f9-4b5c-9e7b-7b49483a6aa0
if [ -z "$UUID" ]; then
    echo -n "Enter UUID: "
    read UUID
fi

[ -e dockerfiles.tar.gz ] && rm dockerfiles.tar.gz

tar cvzf dockerfiles.tar.gz Dockerfile $UUID.* root/

md5sum dockerfiles.tar.gz
