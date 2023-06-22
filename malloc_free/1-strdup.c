#include "holberton.h"
#include <stdlib.h>

/**
  * _strdup - copy a string
  * @str: string that needs copied
  * Return: copy of the string
  */

char *_strdup(char *str)
{
	int i = 0, i2 = 1;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[i2])
	{
		i2++;
	}

	p = malloc((sizeof(char) * i2) + 1);

	if (p == NULL)
		return (NULL);

	while (i < i2)
	{
		p[i] = str[i];
		i++;
	}

	p[i] = '\0';
	return (p);
}
