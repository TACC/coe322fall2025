#!/bin/bash

if [ $# -ne 1 ] ; then
    echo "Usage: $0 hwdir"
    exit 0
fi
if [ ! -d $1 ] ; then
    echo "Directory $1 does not exist"
    exit 1
fi
mkdir -p build
cd build
cmake ../$1
make
