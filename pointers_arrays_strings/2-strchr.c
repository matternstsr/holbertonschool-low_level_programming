#include "main.h"
#include <stdio.h>
/**
 * _strchr - searches string till it find a char def by c or null if not.
 * @s: sting of info
 * Return: pointer to the first occuence of the letter c.
 *
 */

char *_strchr(char *s, char c)
{
	int a;
	char *p;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (a = 0; s[a] != c; a++)
		{
			if (s[a] == c)
				*p = (s[a]);
			return (p);
		}
	}
	return (NULL);
}
