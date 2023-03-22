#include "main.h"

/**
 * _isalpha  -is alhpa char or not
 *@c: Char in ASCII code
 (*
 * Return: 1 if lower case char else return 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
