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
	hash_node_t *new;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}
	else if (key[0] == '\0')
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		if (ht->array[index]->key == key)
		{
			ht->array[index]->value = strdup(value);
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
		return (0);
	new->value = strdup(value);
	if (new->value == NULL)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
