#!/bin/bash

SOURCE_FILE="5-5-printf.c"
OUTPUT_FILE="executable"

# Compile the source file
gcc $SOURCE_FILE -o $OUTPUT_FILE

# Run the executable
./$OUTPUT_FILE
