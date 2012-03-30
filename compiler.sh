#!/bin/bash

rm *.o
gcc -c src/processus.c   -I/usr/local/opt/xenomai/include/ -D_GNU_SOURCE -D_REENTRANT -Wall -Werror-implicit-function-declaration -pipe -D__XENO__
gcc -c src/genTemp.c
gcc -c src/main.c  -I/usr/local/opt/xenomai/include/ -D_GNU_SOURCE -D_REENTRANT -Wall -Werror-implicit-function-declaration -pipe -D__XENO__
gcc genTemp.o processus.o main.o -o ./mt -L/usr/local/opt/xenomai/lib -lxenomai -lpthread -lrt