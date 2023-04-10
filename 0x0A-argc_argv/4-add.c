#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		while (*arg != '\0')
		{
			if (!isdigit(*arg))
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", argc > 1 ? sum : 0);
	return (0);
}
