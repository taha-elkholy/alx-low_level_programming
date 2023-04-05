#include "main.h"

/**
 * _print_rev_recursion - a function that print a string using recursion
 * @s: str to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
