#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - the length of a listint_t list
 * @h: pointer to a listint_t list
 *
 * Return: length of listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 1;

	if (h == NULL)
	{
		return (0);
	}

	if (h->next != NULL)
	{
		n += listint_len(h->next);

		return (n);
	}
	else
	{
		return (n);
	}
}
