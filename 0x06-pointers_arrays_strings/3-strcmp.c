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
	int l1, l2, res;

	l1 = 0;
	l2 = 0;

	while (s1[l1] != '\0')
	{
		l1++;
	}

	while (s2[l2] != '\0')
	{
		l2++;
	}

	if (l1 > l2)
	{
		res = 1;
	}
	else if (l1 < l2)
	{
		res = -1;
	}
	else
	{
		res = 0;
	}

	return (res);

}
