#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: int value
 * @b: int value
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int first;
	int second;

	first = *a;
	second = *b;
	*a = second;
	*b = first;

}
