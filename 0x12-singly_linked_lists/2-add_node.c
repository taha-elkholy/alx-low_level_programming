/*
 * File: 2-add_node.c
 * Author: Created By TahaElkholy
 */

#include "lists.h"
#include <string.h>

/**
 * add_node - add new element in the bigin
 * @head: head
 * @str: string to be added
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	unsigned int n;
	list_t *node;

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
	node->next = *head;
	*head = node;
	return (node);
}
