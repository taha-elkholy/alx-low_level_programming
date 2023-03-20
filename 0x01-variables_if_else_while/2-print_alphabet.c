#include <stdio.h>

/**
 * main - starter point for the programe
 *
 * print all alphabet in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 'A'; i <= 'Z'; i++)
	{
		char ch = tolower(i);

		putchar(ch);
	}
	return (0);
}
