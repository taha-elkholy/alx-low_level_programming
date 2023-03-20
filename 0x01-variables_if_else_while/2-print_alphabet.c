#include <stdio.h>
#include <ctype.h>

/**
 * main - starter point for the programe
 *
 * print all alphabet in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 'A'; i <= 'Z'; i++)
	{
		ch = tolower(i);
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
