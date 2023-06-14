#include "main.h"

/**
 * _strcat - adds src string to the end dest string
 * @dest: Destination of the concatinated string
 * @src: Source
 *
 * Return: pointer to dest string
 */

char *_strcat(char *dest, char *src)
{
	int ptr = 0;
	int ptr2 = 0;

	while (dest[ptr] != '\0')
	{
		ptr++;
	}

	while (src[ptr2] != '\0')
	{
		dest[ptr] = src[ptr2];
		ptr++;
		ptr2++;
	}
	dest[ptr] = '\0';

	return (dest);
}
