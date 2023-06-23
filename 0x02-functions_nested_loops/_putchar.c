#include "main.h"

int main(void)
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');

    print_alphabet();
    print_alphabet_x10();

    int lowercaseCheck = is_lower('a');
    int alphaCheck = is_alpha('A');
    int sign = print_sign(-10);
    int absolute = absolute_value(-5);
    int lastDigit = print_last_digit(123);
    
    jack_bauer();
    times_table();
    print_to_98(5);
    print_times_table(7);

    return 0;
}
