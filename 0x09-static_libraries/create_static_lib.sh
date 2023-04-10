#!/bin/bash

# Compile all .c files into .o object files
gcc -c *.c

# Create a static library liball.a from the .o object files
ar -rc liball.a *.o

# Index the library for faster linking
ranlib liball.a

# Clean up the .o object files
rm *.o

# Print success message
echo "Static library liball.a created successfully!"

