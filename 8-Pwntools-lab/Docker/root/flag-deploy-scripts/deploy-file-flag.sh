#!/usr/bin/with-contenv bash
# Use this script to copy the goldnugget file to the correct place.
# You can find it under /goldnugget/b4361c6e-1322-4086-adb8-0cb3338dfd42.gn

# cd /compile

#source /goldnugget/*.gn

#echo $GOLDNUGGET | cut -c1-32 > /flag.txt
#echo $GOLDNUGGET > /flag.txt

#gcc -m32 server.c -o server

cp /compile/server /opt/www/

ls -al /opt/www

