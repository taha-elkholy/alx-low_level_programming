/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: character to search for
 *
 * Return: new string.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);

}

