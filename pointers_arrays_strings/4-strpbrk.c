#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches string till it find a char def by c or null if not.
 * @s: initial string
 * @accept: info that is selected for comparison.
 * Return: the chars that match as the point to that char
 *
 */

char *_strpbrk(char *s, char *accept)
{
	char i = 0;
	char j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
		i++;
	}
	return (i);
}
