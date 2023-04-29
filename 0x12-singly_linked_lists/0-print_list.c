#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of the list
 * @h: head
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("[%lu] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		n++;
	}

	return (n);
}
