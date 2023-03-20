#include <stdio.h>

/**
 * main - starter point for the programe
 *
 * print numbers from 0 to 9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + (i % 10));
	}
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
