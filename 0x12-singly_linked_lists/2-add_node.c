#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node to the list_t list
 * @head: Double pointer to the head
 * @str: pointer to a string for a node
 *
 * Return: the address to the new node or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n;

	if (str == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);

	if (new->str == NULL)
	{
		return (NULL);
	}

	n = 0;

	while (new->str[n] != '\0')
	{
		n++;
	}

	new->len = n;
	new->next = *head;
	*head = new;

	return (*head);
}
