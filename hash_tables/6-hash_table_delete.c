#include "hash_tables.h"

/**
 * hash_table_delete - Deletes array,node,table.
 * @ht: A pointer to the table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *nodetodel, *travistmp;
	unsigned long int inc;
	
	for (inc = 0; inc < ht->size; inc++)
	{
		if (ht->array[inc])
		{
			nodetodel = ht->array[inc];
			while (nodetodel != NULL)
			{
				travistmp = nodetodel->next;
				free(nodetodel->key);
				free(nodetodel->value);
				free(nodetodel);
				nodetodel = travistmp;
			}
		}
	}
	free(head->array);
	free(head);
}
