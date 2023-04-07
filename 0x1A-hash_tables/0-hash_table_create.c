#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: this is the size of the array
 *
 * Return: the address of the hash_table or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	if (size <= 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
