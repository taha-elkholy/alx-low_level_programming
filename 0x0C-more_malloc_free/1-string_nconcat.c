#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - counts and returns string length
 * @s: the input string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; *s; c++)
		s++;

	return (c);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: str 1
 * @s2: str 2
 * @n: size
 *
 * Return: concatenates two strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr;
	unsigned int idx, jdx, s1l, s2l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1l = _strlen(s1);
	s2l = _strlen(s2);

	n = (n >= s2l) ? s2l : n;

	nstr = malloc((s1l + n) * sizeof(char) + 1);

	if (!nstr)
		return (NULL);

	for (idx = 0; idx < s1l; idx++)
		nstr[idx] = s1[idx];

	for (jdx = 0; jdx < n; jdx++, idx++)
		nstr[idx] = s2[jdx];

	nstr[idx] = '\0';

	return (nstr);
}
