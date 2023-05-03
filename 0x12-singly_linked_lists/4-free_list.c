/*
 * File: 4-free_list.c
 * Author: Created By TahaElkholy
 */

#include "lists.h"
#include <string.h>

/**
 * free_list - free list
 * @head: head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
