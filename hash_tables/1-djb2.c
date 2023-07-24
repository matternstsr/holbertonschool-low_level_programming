#include "hash_tables.h"

/**
 * _strncat - adds n number of to the end array of src into dest.
 * @dest: Dest
 * @src: Source string
 * @n: The number places of the array
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int source_index = 0;
	int source_index2 = 0;

	/* got to the end of the string src*/
	while (dest[source_index] != '\0')
	{
		source_index++;
	}

	/* adding how ever many n is to the end. */
	while (src[source_index2] != src[n])
	{
		dest[source_index] = src[source_index2];
		source_index++;
		source_index2++;
	}
	dest[source_index] = '\0';

	return (dest);
}
