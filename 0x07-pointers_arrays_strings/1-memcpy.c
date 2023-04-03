/**
 * _memcpy - copies memory area.
 *
 * @dest:Pointer to the memory area to be filled.
 * @src: Value to be set. The value is passed as an int, but the function fills
 *     the memory area using the unsigned char conversion of this value.
 * @n: Number of bytes to be set to the value.
 *
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
