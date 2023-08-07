#!/bin/bash

# List of source files to compile
source_files=(
    _putchar.c
    3-islower.c
    4-isalpha.c
    6-abs.c
    0-isupper.c
    1-isdigit.c
    2-strlen.c
    3-puts.c
    9-strcpy.c
    100-atoi.c
    0-strcat.c
    1-strncat.c
    2-strncpy.c
    3-strcmp.c
    0-memset.c
    1-memcpy.c
    2-strchr.c
    3-strspn.c
    4-strpbrk.c
    5-strstr.c
)

# Loop through the source files and compile them
for source_file in "${source_files[@]}"; do
    gcc -c "$source_file"
done

echo "Compilation completed."
