/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: a string
 * @c: char which we locate it in the s string
 *
 * Return: a pointer to the first occurrence of the character c in the string s
 * or NULL if is not exist
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
