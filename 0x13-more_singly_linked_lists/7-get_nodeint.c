/*
 * File: 7-get_nodeint.c
 * Author: TahaElkholy
 */

#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - get the nth node by index
 * @head: head of linked list
 * @index: index of the node
 *
 * Return: if node not exist  (NULL) or (n) of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	int n = 0;

	while (head)
	{
		if (n == index)
		{
			node = head;
			break;
		}

		n++;
		head = head->next;
	}
	return (node->n);
}
