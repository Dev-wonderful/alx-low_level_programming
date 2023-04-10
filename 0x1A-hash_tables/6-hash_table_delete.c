#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table to be deleted
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *tmp, *d_node;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			free(tmp->key);
			free(tmp->value);
			d_node = tmp;
			tmp  = tmp->next;
			free(d_node);
		}
	}
	free(ht->array);
	free(ht);
}
