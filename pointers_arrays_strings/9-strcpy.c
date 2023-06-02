#include "main.h"

/**
 * _strcpy - used to print the array at the set value set by n
 * @dest: destination of the buffer
 * @src: source of the string to be copied
 * Return: void
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	(i = 0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
