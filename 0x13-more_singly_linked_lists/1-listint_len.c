/*
 * File: 1-listint_len.c
 * Author: TahaElkholy
 */

#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns number of elements in a linked listint_t list
 * @h: head of linked list
 *
 * Return: number of element in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);

}
