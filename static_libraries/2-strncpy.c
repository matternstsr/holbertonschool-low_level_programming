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
	int i;
	(i = 0);
	while (src[i] != '\0')
	{
		if (i < n)
		{
		dest[i] = src[i];
		i++;
		}
		else
			break;

	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
