#include "main.h"

/**
 * main - starter point to the program
 *
 * this program prints all alphabet in lower case
 * Return: (0) return nothing
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
