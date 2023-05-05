/*
 * FileName: 5-flip_bits.c
 * Author: This file created by TahaElkholy
 */

#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number
 * @m:m
 *
 * Return: returns the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			counter++;

		m = m >> 1;
		n = n >> 1;
	}
	return (counter);
}
