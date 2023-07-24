#include "hash_tables.h"

/**
 * hash_table_print - Prints the selected hash table.
 * @ht: print directed by the pointer
 * @key: The key
 *
 * Return: The value connected to the key
 * or NULL if key couldn't be found
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nodentable;
	unsigned long int inc;
	unsigned char insert_comma = 0;

	if (ht == NULL)
	return;

	printf("{");
	for (inc = 0; inc < ht->size; inc++)
	{
		if (ht->array[inc] != NULL)
		{
			if (insert_comma == 1)
				printf(", ");

			nodentable = ht->array[inc];
			while (nodentable != NULL)
			{
				printf("'%s': '%s'", nodentable->key, nodentable->value);
				nodentable = nodentable->next;
				if (nodentable != NULL)
					printf(", ");
			}
			insert_comma = 1;
		}
	}
	printf("}\n");
}
