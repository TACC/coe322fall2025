#!/bin/bash

# if no arguments: point out usage
if [ $# -eq 0 ] ; then
	echo "Usage: cbuild.sh [ -h ] [ -m ] dir"
	exit 0
fi

# parse commandline arguments
onlymake=0
while [ $# -gt 1 ] ; do
    if [ $1 = "-h" ] ; then
	echo "Usage: cbuild.sh [ -h ] [ -m ] dir"
	exit 0
    elif [ $1 = "-m" ] ; then
	onlymake=1
	shift
    else
	echo "Error: unrecognized option <<$1>>"
	exit 1
    fi
done

# the remaining argument is the directory; test that it exists
dir=$1
if [ ! -d $dir ] ; then
    echo "Directory $1 does not exist"
    exit 1
fi

# now do the full cmake/make cycle
if [ $onlymake -eq 0 ] ; then
    rm -rf build
    mkdir -p build
    cd build
    cmake ../$1
    make
else
    # or only make
    cd build
    make
fi
