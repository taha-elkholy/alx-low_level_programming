/*
 * File: 9-insert_nodeint.c
 * Author: TahaElkholy
 */

#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - insert in index
 * @head: head of linked list
 * @idx: index
 * @n: value
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node, *temp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = temp;
		*head = node;
		return (node);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}
	node->next = temp->next;
	temp->next = node;

	return (node);
}