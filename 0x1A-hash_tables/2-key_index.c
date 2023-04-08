#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - to create an index for a key
 * @key: the key to be indexed
 * @size: the size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	if (size <= 0 || key == NULL)
		return (0);

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
