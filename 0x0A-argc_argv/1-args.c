#include <stdio.h>

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
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
