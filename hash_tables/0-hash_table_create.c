#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with given size
 * @size: The size
 * Return: pointer to created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	hash_node_t **arrayofnodes;
	unsigned long int count = 0;

	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);

	arrayofnodes = malloc(sizeof(hash_node_t *) * size);
	if (arrayofnodes == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
		arrayofnodes[cunt] = NULL;

	hashtable->arrayofnodes = arrayofnodes;
	hsahtable->size = size;

	return (hashtable);
}
