#include "hash_tables.h"
#define SIZE 1024

/**
 * hash_table_print - print a hash table
 * @ht: the hash table to be printed
 *
 * Description: prints the key/value in the order that they
 * appear in the array of hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *tmp;
	char *sep;

	if (ht == NULL)
		return;

	sep = "";
	printf("{");
	for (index = 0; index < SIZE; index++)
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
			tmp = tmp->next;
			sep = ", ";
		}
	}
	printf("}\n");
}
