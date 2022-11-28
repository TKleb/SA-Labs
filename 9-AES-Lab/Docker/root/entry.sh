#!/bin/sh
/usr/bin/socat TCP4-LISTEN:1345,fork,reuseaddr EXEC:/app/server.py
