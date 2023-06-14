#include "main.h"

/**
 * _memset - fills desiganted bytes with desiganted values.
 * @s: pointer to the memeory location
 * @n: number of bytes to fill of memory.
 * @b: what the bytes are filled with designated by n.
 * Return: pointer to the memeory address afftect n.
 *
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
