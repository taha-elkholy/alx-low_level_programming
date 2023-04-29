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

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil\n)");
		else
			printf("[%d] %s\n", n, h->str);
		n++;
		h = h->next;
	}

	return (n);
}
