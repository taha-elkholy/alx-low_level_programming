#include "main.h"

/**
 * print_triangle - print triangle
 * @size: triangle size
 *
 * Return: void
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int x, y, z;

		for (x = 0; x < size; x++)
		{
			for (y = size - x; y > 1; y--)
			{
				_putchar(32);
			}
			for (z = 0; z <= x; z++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
