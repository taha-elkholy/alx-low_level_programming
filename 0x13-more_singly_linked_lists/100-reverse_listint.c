/*
 * File: 100-reverse_listint.c
 * Author: TahaElkholy
 */

#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverse list
 * @head: head of linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;

	while (*head)
	{
		listint_t *node = (*head)->next;

		(*head)->next = previous;
		previous = *head;
		*head = node;
	}
	return (previous);
}
