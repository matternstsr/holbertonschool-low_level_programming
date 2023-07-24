#include "hash_tables.h"

/**
 * hash_djb2 - using djb2
 * @str: string used to make hash value
 *
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_value;
	int count;

	hash_value = 5381;
	while ((count = *str++))
	{
		hash_value = ((hash_value << 5) + hash_value) + count;
	}
	return (hash_value);
}
