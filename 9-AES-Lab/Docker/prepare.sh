#!/bin/bash
UUID=4fbc5d17-663f-4360-88c3-a8f8c745ec37
if [ -z "$UUID" ]; then
    echo -n "Enter UUID: "
    read UUID
fi

[ -e dockerfiles.tar.gz ] && rm dockerfiles.tar.gz

tar cvzf dockerfiles.tar.gz Dockerfile $UUID.* root/

md5sum dockerfiles.tar.gz
