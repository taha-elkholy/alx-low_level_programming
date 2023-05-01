/*
 * File: 0-print_listint.c
 * Auth: Taha Elkholy
 */

#include "lists.h"
#include <stdio.h>

/*
 * print_listint: print all element in a linked list
 * @h: head of linked list
 *
 * Return: number of element
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);

}

