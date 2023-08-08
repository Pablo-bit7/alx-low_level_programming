#!/bin/bash

# Compile all .c files in the current directory into object files
for source_file in *.c; do
    gcc -c "$source_file"
done

# Create the static library liball.a from the compiled object files
ar rcs liball.a *.o

echo "Static library liball.a created."
