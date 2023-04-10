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
	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		int i, sum;

		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) != '\0')
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}

		}
		printf("%d\n", sum);
	}

	return (0);
}
