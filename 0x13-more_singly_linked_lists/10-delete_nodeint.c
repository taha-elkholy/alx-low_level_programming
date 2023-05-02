/*
 * File: 10-delete_nodeint.c
 * Author: TahaElkholy
 */

#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - delete at index
 * @head: head of linked list
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *temp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
	}
	node = temp->next;
	temp->next = node->next;
	free(node);

	return (1);
}
