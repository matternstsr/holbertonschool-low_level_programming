#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with given size
 * @size: The size of the given array
 * Return: pointer to created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)

	hash_table_t *hashtable;
	
	hashtable = malloc(sizeof(hash_table_t));
	if (!hashtable)
		return (NULL);

	hashtable->size = size;
	hashtable->array = calloc(size, sizeof(hash_node_t *));
	if (!(hashtable->array))
	{
		free(hashtable);
		return (NULL);
	}

	return (hashtable);
}
