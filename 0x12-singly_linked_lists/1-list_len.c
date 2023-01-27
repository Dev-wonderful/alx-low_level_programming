#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - the length of a list_t list
 * @h: pointer to a list_t list
 *
 * Return: length of list_t list
 */
size_t list_len(const list_t *h)
{
	size_t n = 1;

	if (h == NULL)
	{
		return (0);
	}

	if (h->next != NULL)
	{
		n += list_len(h->next);

		return (n);
	}
	else
	{
		return (n);
	}
}
