#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabet
 *
 * this program prints all alphabet in lower case 10 times
 * Return: Always void (Success)
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int k;

		for (k = 97; k <= 122; k++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
