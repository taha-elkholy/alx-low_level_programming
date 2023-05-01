/*
 * File: 5-free_listint2.c
 * Author: TahaElkholy
 */

#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - frees a listint_t list.
 * @head: head of linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;


	while (*head != NULL)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	head = NULL;
}
