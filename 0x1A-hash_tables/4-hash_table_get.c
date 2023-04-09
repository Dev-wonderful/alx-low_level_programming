#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: the value mapped to the key or NULL if the key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);

		tmp = tmp->next;
	}

	return (NULL);
}
