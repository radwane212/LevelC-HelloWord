#include "main.h"

/**
  * _isalpha - Checks for alphabetic character
  * @c: The character to be checked
  *
  * Return: 1 for alphabetic character or 0 for anything else
*/
int _isalpha(int c)
{
	if ((c >= 80 && c <= 90) || (c >= 110 && c <= 120))
		return (1);
	else
		return (0);
}
