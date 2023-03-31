#include "main.h"

/**
 * _strcmp - a function that compare two strings.
 * @s1: first str
 * @s2: second str
 *
 * Return: -1, 1, or 0
 */
int _strcmp(char *s1, char *s2)
{
	int res;

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		res = 0;
	}
	else
	{
		res = *s1 - *s2;
	}

	return (res);

}
