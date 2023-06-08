#include "main.h"

/**
 * _memcpy - fills desiganted bytes with desiganted values.
 * @dest: pointer to the destination memeory location
 * @n: number of bytes to fill of memory.
 * @src: what the bytes are filled with designated by n.
 * Return: pointer to the memeory address afftect n.
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)

i
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a]
	}
	return (dest);
}
