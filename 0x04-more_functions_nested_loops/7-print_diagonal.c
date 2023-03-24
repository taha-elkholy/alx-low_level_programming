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
		int i;

		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
	}

	_putchar('\n');
}
