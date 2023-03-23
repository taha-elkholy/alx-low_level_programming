#include "main.h"

/**
 * _isupper - tell us if the char is upper or lower case
 * @c: Char in ASCII code
 *
 * Return: 1 for Upper or 0 if lower
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
