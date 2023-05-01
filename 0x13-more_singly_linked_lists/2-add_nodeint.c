/*
 * File: 2-add_nodeint.c
 * Author: TahaElkholy
 */

#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - add element in the begin of a linked list.
 * @head: head of linked list
 * @n: number
 *
 * Return: Error if Null or new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);

}
