#include <stdio.h>
#include <stdlib.h>

/**
 * main - starter point to the program
 *
 * @argc: number of arguments
 * @argv: arry of strings related to args names
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
