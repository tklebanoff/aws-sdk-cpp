#!/usr/bin/env sh
cat /etc/os-release | grep '^NAME' | cut -d= -f2 
