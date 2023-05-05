/*
 * FileName: 3-set_bit.c
 * Author: This file created by TahaElkholy
 */

#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: index
 *
 * Return: 1 if done or -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | 1ul << index;
	return (1);
}
