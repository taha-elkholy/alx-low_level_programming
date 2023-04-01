#include "main.h"

/**
 * print_number - print number
 * @n: number value
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
	}

	if (n != 0)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}
