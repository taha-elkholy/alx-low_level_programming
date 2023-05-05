/*
 * FileName: 4-clear_bit.c
 * Author: This file created by TahaElkholy
 */

#include "main.h"

/**
 * clear_bit - clear bit
 * @n: number
 * @index: index
 *
 * Return: the value of the bit at index index or -1 if an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}
