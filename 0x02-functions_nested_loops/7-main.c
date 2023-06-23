#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 *
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
    int last_digit;

    last_digit = n % 10;
    if (last_digit < 0)
        last_digit *= -1;

    _putchar('0' + last_digit);
    return last_digit;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
