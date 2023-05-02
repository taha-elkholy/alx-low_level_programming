/*
 * File: 0-print_list.c
 * Author: Created By TahaElkholy
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of the list
 * @h: head
 *
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		n++;
		h = h->next;
	}

	return (n);
}
