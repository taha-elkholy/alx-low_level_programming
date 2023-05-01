/*
 * File: 8-sum_listint.c
 * Author: TahaElkholy
 */

#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - return sum of n in the list.
 * @head: head of linked list
 *
 * Return: void
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
