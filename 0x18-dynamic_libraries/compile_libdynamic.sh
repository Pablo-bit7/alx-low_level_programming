#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c libdynamic.c -o libdynamic.o
gcc -shared -o libdynamic.so libdynamic.o

