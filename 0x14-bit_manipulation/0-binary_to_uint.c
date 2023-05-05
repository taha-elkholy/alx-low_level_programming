/*
 * FileName: 0-binary_to_uint.c
 * Author: This file created by TahaElkholy
 */

#include "lists.h"

/**
 * binary_to_uint - convert binary to unit
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i = 0;
	int l = 1;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		res += ((b[i] - '0') * base);
		l *= 2;
		i--;
	}

	return (res);
}
