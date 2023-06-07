#include "main.h"

/**
 * _strncpy - adds src string to the end dest string
 * @dest: Destination of the concatinated string
 * @src: Source
 * @n: value that stops the incrimentation of the destination pointer.
 * Return: pointer to dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		i++;
	}
	dest[n] = '\0';
	return (dest);
}
