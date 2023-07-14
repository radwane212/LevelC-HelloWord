#include <stdio.h>
#include <stdlib.h>

int main() {
    // Compile the C source files into object files
    system("gcc -c file1.c file2.c file3.c");

    // Create the static library using the object files
    system("ar rcs libmylibrary.a file1.o file2.o file3.o");

    // Clean up the object files
    system("rm *.o");

    printf("Static library created successfully.\n");

    return 0;
}
