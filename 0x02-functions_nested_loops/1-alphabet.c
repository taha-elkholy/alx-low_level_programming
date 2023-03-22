#include "main.h"

/**
 * print_alphabet - prints all alphabet
 *
 * this program prints all alphabet in lower case
 * Return: Always void (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
