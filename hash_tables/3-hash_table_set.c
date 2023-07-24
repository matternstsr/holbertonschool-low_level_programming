#include "hash_tables.h"

/**
 * hash_table_set - adds to the hash table
 * @ht: Hash table
 * @key: The key
 * @value: value with key
 * Return: 1 sucess, 0 other
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	unsigned long int ina;
	hash_node_t *new_table;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (ina = index; ht->array[ina]; ina++)
	{
		if (strcmp(ht->array[ina]->key, key) == 0)
		{
			free(ht->array[ina]->value);
			ht->array[ina]->value = strdup(value);
			if (ht->array[ina]->value == NULL)
				return (0);
			return (1);
		}
	}

	new_table = malloc(sizeof(hash_node_t));
	if (new_table == NULL)
		return (0);

	new_table->key = strdup(key);
	if (new_table->key == NULL)
		return (0);

	new_table->value = strdup(value);
	if (new_table->value == NULL)
		return (0);

	new_table->next = ht->array[index];
	ht->array[index] = new_table;

	return (1);
}
