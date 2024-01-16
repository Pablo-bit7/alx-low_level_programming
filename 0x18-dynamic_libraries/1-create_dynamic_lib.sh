#!/bin/bash

# Get all .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

# Check if there are any .c files
if [ -z "$c_files" ]; then
    echo "No .c files found in the current directory."
    exit 1
fi

# Compile each .c file into an object file
for file in $c_files; do
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c "$file" -o "${file%.c}.o"
done

# Create the dynamic library (liball.so)
gcc -shared -o liball.so *.o

# Clean up: remove the temporary object files
rm *.o

echo "Dynamic library liball.so created successfully."

