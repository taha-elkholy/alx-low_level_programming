#include <stdio.h>

/**
 * print_diagsums - sum of the two diagonals of a square matrix
 *
 * @a: two dimensional array
 * @size: size of matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int diagsum_one, diagsum_two;

	diagsum_one = 0;
	diagsum_two = 0;

	for (i = 0; i < size; i++)
	{
		diagsum_one += *(a + i * size + i);
		diagsum_two += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n", diagsum_one, diagsum_two);
}
