#!/bin/bash

arg1=$1
arg2=$2
cd $arg1
gcc -o $arg2.o $arg2.c && ./$arg2.o