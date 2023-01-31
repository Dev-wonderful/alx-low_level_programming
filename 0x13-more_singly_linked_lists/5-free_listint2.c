#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a double pointer to a listint_t first node
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *node;

	if (*head == NULL || head == NULL)
	{
		return;
	}

	node = *head;

	while (node->next != NULL)
	{
		temp = node->next;
		free(node);
		node = temp;
	}

	free(node);
	*head = NULL;
}
