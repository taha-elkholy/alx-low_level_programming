#!/bin/bash

# create_static_lib.sh

# Create an object file for each .c file
for file in *.c; do
    gcc -c $file -o "${file%.*}.o"

