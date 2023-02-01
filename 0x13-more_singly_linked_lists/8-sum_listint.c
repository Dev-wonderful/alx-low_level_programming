#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - the sum of data of a listint_t list
 * @head: pointer to a listint_t list head node
 *
 * Return: sum of all the data of listint_t list
 */
int sum_listint(listint_t *head)
{
	int n = 0;

	if (head == NULL)
	{
		return (n);
	}

	if (head->next != NULL)
	{
		n = (head->n) + sum_listint(head->next);

		return (n);
	}
	else
	{
		n = head->n;
		return (n);
	}
}
