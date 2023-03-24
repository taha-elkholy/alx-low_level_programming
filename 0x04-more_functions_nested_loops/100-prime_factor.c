#include <stdio.h>
#include <math.h>

/**
 * main - start point
 *
 * Return: 0
 */

int main(void)
{
	int i, x;
	long num = 612852475143;

	x = (int) sqrt(num);
	for (i = x; i > 2; i++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
			break;
		}

	}

	return (0);
}
