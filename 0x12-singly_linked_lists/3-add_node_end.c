/*
 * File: 3-add_node_end.c
 * Author: Created By TahaElkholy
 */

#include "lists.h"
#include <string.h>

/**
 * add_node_end - add new element in the end
 * @head: head
 * @str: string to be added
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	unsigned int n;
	list_t *node, *last_node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(node);
		return (NULL);
	}
	for (n = 0; str[n];)
		n++;
	node->str = dup;
	node->len = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
			last_node->next = node;
		}
	}

	return (*head);
}
