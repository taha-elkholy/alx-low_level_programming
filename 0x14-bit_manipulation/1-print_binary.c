/*
 * FileName: 1-print_binary.c
 * Author: This file created by TahaElkholy
 */

#include "main.h"
#include <limits.h>
#include <unistd.h>


/**
 * print_binary - prints the binary representation of a number
 * @n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit = 1ul << 63;
	char c = '0';

	while (!(bit & n) && bit != 0)
		bit = bit >> 1;
	if (bit == 0)
		write(1, &c, 1);

	while (bit)
	{
		if (bit & n)
			c = '1';
		else
			c = '0';

		write(1, &c, 1);
		bit = bit >> 1;
	}
}
