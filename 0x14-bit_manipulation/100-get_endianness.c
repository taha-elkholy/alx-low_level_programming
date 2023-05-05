/*
 * FileName: 100-get_endianness.c
 * Author: This file created by TahaElkholy
 */

#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int num = 1;

	return (*((char *) &num) + '0');
}
