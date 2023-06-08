#include "main.h"
#include <stdio.h>

/**
 * _strspn - searches string till it find a char def by c or null if not.
 * @s: initisal string
 * @accept: info that is selected for comparison.
 * Return: the chars that were in s up to the 32 that match in accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
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
			return i;
		}
		i++;
	}
	return i;
}
