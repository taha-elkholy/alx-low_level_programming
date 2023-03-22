#include "main.h"

/**
 * _abs - print absuliot value of number n
 *@n: number
 (*
 * Return: abs of n on success
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
