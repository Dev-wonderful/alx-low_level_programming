#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - the sum of data of a listint_t list
 * @head: double pointer to a listint_t list head node
 * @idx: index point to insert new node
 * @n: data for the new node
 *
 * Return: address of new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t **prev;
	listint_t *curr;
	listint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}
	else if (*head == NULL)
	{
		return (NULL);
	}
	prev = head;
	curr = *prev;

	while (i != idx)
	{
		if (curr->next == NULL)
		{
			if (idx - i == 1)
			{
				new = add_nodeint_end(head, n);
				return (new);
			}
			else
			{
				return (NULL);
			}
		}
		prev = &curr->next;
		curr = curr->next;
		i++;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = curr;
	*prev = new;

	return (new);
}
