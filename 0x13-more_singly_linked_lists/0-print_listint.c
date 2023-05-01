#include "lists.h"
#include <stdio.h>

/**
 * print_listint - this function print all element in a linked list.
 * @h: head of linked list
 *
 * Return: number of element in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);

}
