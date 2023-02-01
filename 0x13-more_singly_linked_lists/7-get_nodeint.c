#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at a specified index
 * @head: pointer to the head node
 * @index: index of the node starting at 0
 *
 * Return:the nth node 
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	
	i = 0;
	curr = head;

	while (i != index)
	{
		curr = curr->next;
		if (curr == NULL)
		{
			return (NULL);
		}
		i++;
	}

	return (curr);
}
