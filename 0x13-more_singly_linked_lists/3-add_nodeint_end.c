#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the listint_t list
 * @head: Double pointer to the head
 * @n: integer value for a node
 *
 * Return: the address to the new node or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t **l_ptr;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	l_ptr = head;

	while (*l_ptr != NULL)
	{
		l_ptr = &(*l_ptr)->next;
	}

	new->n = n;
	new->next = *l_ptr;
	*l_ptr = new;

	return (*l_ptr);
}
