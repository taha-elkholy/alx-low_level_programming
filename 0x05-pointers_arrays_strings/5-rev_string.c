#include "main.h"

/**
 * _strlen - the length of a string
 * @s: str value
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	return (length);

}

/**
 * rev_string - print reversed string
 * @s: string input
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len, ss_index = 0;

	len = _strlen(s) - 1; /* remove '\0' */
	char *ss;

	for (i = len; i >= 0; i--)
	{
		ss[ss_index] = s[i];
		ss_index++;
	}

	s = ss;
}
