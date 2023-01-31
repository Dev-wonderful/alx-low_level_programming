#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of listint_t list
 * @h: pointer to listint_t list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 1;

	if (h == NULL)
	{
		return (0);
	}

	if (h->n != NULL)
	{
		printf("%d\n", h->n);
	}
	else
	{
		printf("%d\n", 0);
	}

	if (h->next != NULL)
	{
		n += print_list(h->next);
		return (n);
	}
	return (n);
}
