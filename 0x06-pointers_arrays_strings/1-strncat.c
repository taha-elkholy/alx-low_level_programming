#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: first str
 * @src: second str
 * @n: byets
 *
 * Return: concatination of the 2 strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int l1, l2;

	l1 = 0;
	l2 = 0;

	while (*(dest + l1) != '\0')
	{
		l1++;
	}

	while (*(src + l2) != '\0' && l1 < 97 && l2 < n)
	{
		*(dest + l1) = *(src + l2);
		l1++;
		l2++;
	}
	*(dest + l1) = '\0';

	return (dest);

}
