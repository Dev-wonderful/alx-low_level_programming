#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - prints all elements of list_t list
 * @h: pointer to list_t list
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t n = 1;

	if (h == NULL)
	{
		return (0);
	}

	if (h->str && h->len && h->str != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	else
	{
		printf("[%d] %s\n", 0, "(nil)");
	}

	if (h->next != NULL)
	{
		n += print_list(h->next);
		
		return (n);
	};
	
	return (n);
}
