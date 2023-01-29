#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a pointer to list_t head
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;
	list_t *node;

	if (head == NULL)
	{
		return;
	}

	node = head;

	while (node->next != NULL)
	{
		free(node->str);
		temp = node->next;
		free(node);
		node = temp;
	}

	free(node->str);
	free(node);
}
