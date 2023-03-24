#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: diagonal length
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}

	_putchar('\n');
}
