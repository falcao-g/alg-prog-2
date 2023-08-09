#!/bin/bash
# Script i made to compile and run C++ programs :)

# Check if an argument is provided
if [ $# -ne 2 ]; then
    echo "Usage: $0 <folder_name> <program_name>"
    exit 1
fi

folder_name="$1" # Get folder name
program_name="$2"  # Get the program argument

# Compile the program
g++ "./${folder_name}/${program_name}.cpp" -o "./build/${program_name}"

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful."

    # Execute the compiled program
    "./build/${program_name}"
else
    echo "Compilation failed."
fi
