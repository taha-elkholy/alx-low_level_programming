/*
 * File: 3-add_nodeint_end.c
 * Author: TahaElkholy
 */

#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - add element in the end of a linked list.
 * @head: head of linked list
 * @n: number
 *
 * Return: Error if Null or new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, last_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = new_node;
	}
	return (*head);
}
