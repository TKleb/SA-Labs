#!/usr/bin/with-contenv bash
# Use this script to write / replace the goldnugget to the correct place.
# The goldnugget is available as $GOLDNUGGET.

# export FLAG=$(echo $GOLDNUGGET | cut -c 1-31)
echo $GOLDNUGGET | cut -c 1-32 > /flag.txt
echo $GOLDNUGGET | cut -c 12-27 > /key.txt
MYUUID=$(echo $GOLDNUGGET | cut -c 33-36)

sed -i -e "s/MYUUID/$MYUUID/g" /opt/www/index.html

