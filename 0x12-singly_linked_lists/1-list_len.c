/*
 * File: 1-list_len.c
 * Author: Created By TahaElkholy
 */

#include "lists.h"
#include <stdio.h>

/**
 * list_len - find the number of elements.
 * @h: head
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
