#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete listint_t node at index
 * @head: pointer to the head pointer
 * @index: index number
 *
 * Return: an integer of 1 for success or -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr, **prev;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	prev = head;
	curr = *prev;
	while (i != index)
	{
		if (curr == NULL)
		{
			return (-1);
		}
		prev = &curr->next;
		curr = curr->next;
		i++;
	}
	*prev = curr->next;
	free(curr);

	return (1);
}
