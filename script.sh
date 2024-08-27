#!/bin/bash

arg1=$1
gcc -o $arg1.o $arg1.c && ./$arg1.o