#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
  * hash_table_get - Retrieves a value given by key
  * @ht: The hash table
  * @key: The key
  *
  * Return: The value with key
  * or NULL if key couldn't be found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *partofnode = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	partofnode = ht->array[index];

	if (partofnode == NULL)
		return (NULL);

	while (strcmp(key, partofnode->key) != 0)
		partofnode = partofnode->next;

	return (partofnode->value);
}
