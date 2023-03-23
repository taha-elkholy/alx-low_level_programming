#include "main.h"

/**
 * _isdigit - tell us if the char is digit or not
 * @c: Char in ASCII code
 *
 * Return: 1 for digit or 0 if any
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
