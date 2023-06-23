#include <stdio.h>

/**
 * print_sign - Function to determine the sign of a number.
 * @n: The number to check.
 *
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative.
 */
int print_sign(int n)
{
    if (n > 0)
        return 1;
    else if (n == 0)
        return 0;
    else
        return -1;
}

int main(void)
{
    int r;

    r = print_sign(98);
    printf(",");
    printf(" ");
    printf("%d", r);
    printf("\n");
    r = print_sign(0);
    printf(",");
    printf(" ");
    printf("%d", r);
    printf("\n");
    r = print_sign(0xff);
    printf(",");
    printf(" ");
    printf("%d", r);
    printf("\n");
    r = print_sign(-1);
    printf(",");
    printf(" ");
    printf("%d", r);
    printf("\n");
    return 0;
}
