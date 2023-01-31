#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to a listint_t first node
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *node;

	if (head == NULL)
	{
		return;
	}

	node = head;

	while (node->next != NULL)
	{
		temp = node->next;
		free(node);
		node = temp;
	}

	free(node);
}
