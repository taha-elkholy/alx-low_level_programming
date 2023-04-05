#include "main.h"

/**
 * _puts_recursion - a function that print a string using recursion
 * @s: str to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	_putchar(*(s++));

	_puts_recursion(s);
}
