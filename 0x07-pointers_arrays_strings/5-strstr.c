/**
 * _strstr - Locate a substring
 *
 * @haystack: The string to search
 * @needle: The substring to find
 *
 * Return: Pointer to the beginning of the substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr = haystack;
	char *needle_ptr = needle;

	if (*needle_ptr == '\0')
	{
		return (haystack_ptr);
	}

	while (*haystack_ptr != '\0')
	{
		if (*haystack_ptr == *needle_ptr)
		{
			char *temp_haystack_ptr = haystack_ptr;
			char *temp_needle_ptr = needle_ptr;

			while (*temp_haystack_ptr != '\0'
			       && *temp_needle_ptr != '\0'
			       && *temp_haystack_ptr == *temp_needle_ptr)
			{
				temp_haystack_ptr++;
				temp_needle_ptr++;
			}

			if (*temp_needle_ptr == '\0')
			{
				return (haystack_ptr);
			}
		}

		haystack_ptr++;
	}

	return (0);
}
