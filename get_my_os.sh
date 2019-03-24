#!/usr/bin/env sh

#<--gets the OS from /etc/os-release and strips the quotes-->

OS=`cat /etc/os-release | grep '^NAME' | cut -d= -f2`
temp="${OS%\"}"
temp="${temp#\"}"
temp="${temp#\n}"
echo ${temp// /_}
