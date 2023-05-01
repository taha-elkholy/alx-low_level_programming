/*
 * File: 4-free_listint.c
 * Author: TahaElkholy
 */

#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a listint_t list.
 * @head: head of linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
