#!/bin/bash

if [ $# -eq 0 ] ; then
    echo "You need to supply an argument"
    exit 1
fi
n=$1
echo $n  | ./ff
