#include "lists.h"

/*
 * print_listint: print all element in a linked list
 * h: head of linked list
 *
 * Return: number of element
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
	}

	return (count);
}
