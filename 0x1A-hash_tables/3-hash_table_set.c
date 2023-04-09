#include "hash_tables.h"

/**
 * hash_table_set - adds/updates a key-value pair in the hash table
 * @ht: the hash table to be updated
 * @key: the key for the value
 * @value: the value being mapped
 *
 * Return: 1 for success, 0 for error
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *index_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (*key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	index_node = ht->array[index];
	while (index_node != NULL)
	{
		if (strcmp(index_node->key, key) == 0)
		{
			ht->array[index]->value = strdup(value);
			return (1);
		}
		index_node = index_node->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new->key);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new->value);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
