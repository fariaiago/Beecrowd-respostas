#!/bin/bash
gcc -ansi -O2 -std=c99 $1 -o out -lm
./out $2