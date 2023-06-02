#include "main.h"

/**
 * _strcpy - used to print the array at the set value set by n
 * @dest: destination of the buffer
 * @src: source of the string to be copied
 * Return: void
 *
 */

int _atoi(char *s)
{
	int numbers = 0;
	int signs = 1;
	const char *p;
	(*p = *s);
	if (*p == '-')
	{
		signs = -1;
		p++;
	}
	while (*p != '\0')
	{
		numbers = numbers * 10 + (*p - '0');
		p++;
	}
	return (signs * numbers);
}
