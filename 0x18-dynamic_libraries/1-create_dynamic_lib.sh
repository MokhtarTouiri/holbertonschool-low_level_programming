#!/bin/bash
gcc -Wall -fPIC -c *.c
gcc -shared -Wl,-soname,libholberton.so -o libholberton.so *.o
gcc -shared -Wl,-soname,liball.so -o liball.so *.o

