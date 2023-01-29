#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node to the list_t list
 * @head: Double pointer to the head
 * @str: pointer to a string for a node
 *
 * Return: the address to the new node or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t **l_ptr;
	size_t n;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new->str);
		free(new);
		return (NULL);
	}

	n = 0;

	while (new->str[n] != '\0')
	{
		n++;
	}

	l_ptr = head;

	
	while (*l_ptr != NULL)
	{
		l_ptr = &(*l_ptr)->next;
	}

	new->len = n;
	new->next = *l_ptr;
	*l_ptr = new;

	return (*l_ptr);;
}
