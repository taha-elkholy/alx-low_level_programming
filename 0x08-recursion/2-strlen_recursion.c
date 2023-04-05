/**
 * _strlen_recursion - a function that get length of a string using recursion
 * @s: str to get length
 *
 * Return: length of str.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
