#include "main.h"

/**
 * _strncpy - a function that copy String.
 * @dest: first str
 * @src: second str
 * @n: size
 *
 * Return: copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}

	for ( ; i < n; i++)
	{
		*(dest + i) = '\0';
	}

	return (dest);

}
