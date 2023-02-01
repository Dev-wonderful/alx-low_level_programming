#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the head node pointer
 *
 * Return: the head node data n
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	curr = *head;
	n = curr->n;
	*head = curr->next;
	free(curr);

	return (n);

}
