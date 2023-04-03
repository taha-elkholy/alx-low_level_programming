/**
 * _memset - Fills memory with a constant byte.
 *
 * @s: Pointer to the memory area to be filled.
 * @b: Value to be set. The value is passed as an int, but the function fills
 *     the memory area using the unsigned char conversion of this value.
 * @n: Number of bytes to be set to the value.
 *
 * Return: A pointer to the memory area `s`.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
