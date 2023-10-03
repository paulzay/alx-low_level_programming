#!/bin/bash
gcc -c *.c
ar rcs liball.a *.o
echo y | rm -l *.o
