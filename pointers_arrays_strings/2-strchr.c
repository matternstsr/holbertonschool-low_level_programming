#include "main.h"
#include <stdio.h>
/**
 * _strchr - searches string till it find a char def by c or null if not.
 * @s: sting of info
 * @s: info that is selekcted for comparison.
 * Return: pointer to the first occuence of the letter c.
 *
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0' || s[a] != '\0' + 1; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
		return (NULL);
}
