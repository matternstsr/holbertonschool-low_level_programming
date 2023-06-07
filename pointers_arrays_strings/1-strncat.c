#include "main.h"

/**
 * _strcat - adds src string to the end dest string
 * @dest: Destination of the concatinated string
 * @src: Source
 * @n: value that stops the incrimentation of the destination pointer.
 * Return: pointer to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int ptr = 0;
	int ptr2 = 0;

	while (dest[ptr] != '\0')
	{
		ptr++;
	}

	while (src[ptr2] != '\0')
	{
		if  (ptr2 < n)
		dest[ptr] = src[ptr2];
		ptr++;
		ptr2++;
	}
	dest[ptr] = '\0';

	return (dest);
}
