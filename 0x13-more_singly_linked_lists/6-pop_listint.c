/*
 * File: 6-pop_listint.c
 * Author: TahaElkholy
 */

#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - delete head and return it's value
 * @head: head of linked list
 *
 * Return: (0) if list is empty or (n) of head
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (*head == NULL)
		return (0);
	node = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(node);

	return (n);
}
