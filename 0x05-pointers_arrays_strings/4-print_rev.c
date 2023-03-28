#include "main.h"

/**
 * _strlen - the length of a string
 * @s: str value
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	return (length);

}

/**
 * print_rev - print reversed string
 * @s: string input
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, len;

	len = _strlen(s);
	for (i = len; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
