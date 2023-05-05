/*
 * FileName: 0-binary_to_uint.c
 * Author: This file created by TahaElkholy
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - convert binary to unit
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i, len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
			res |= 1 << (len - 1 - i);
		else if (b[i] != '0')
			return (0);
	}
	return (res);
}
