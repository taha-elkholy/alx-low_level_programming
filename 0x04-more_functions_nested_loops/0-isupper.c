#include "main.h"

/**
 * _isupper - tell us if the char is upper or lower case
 * @c: Char in ASCII code
 *
 * Return: 1 for Upper or 0 if lower
 */

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	_putchar('\n');
}
