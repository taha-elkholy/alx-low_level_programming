/*
 * FileName: 2-get_bit.c
 * Author: This file created by TahaElkholy
 */

#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: index
 *
 * Return: the value of the bit at index index or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 63)
		return (-1);

	bit = 1 << index;
	return ((n & bit) > 0);
}
