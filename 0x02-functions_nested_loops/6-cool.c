#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @c: The number to be computed.
 *
 * Return: Absolute value of the number or zero.
 */
int _abs(int c)
{
    if (c < 0)
    {
        return -c;
    }

    return c;
}
