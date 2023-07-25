#include <stdio.h>

/**
 * main - prints the name of the program and all the arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    int i;

    // Print the name of the program (first argument)
    printf("Program name: %s\n", argv[0]);

    // Print all the arguments starting from the second one
    for (i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
