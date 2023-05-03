#!/bin/bash
gcc -ansi $1 -o out -std=c99 -O2 -lm
./out $2