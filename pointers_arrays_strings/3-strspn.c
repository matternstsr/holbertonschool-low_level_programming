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
	unsigned int i1;
	unsigned int i2;
	unsigned int i3;
	unsigned int *tempstr;

	for (i1 = 0; s[i1] != ' '; i1++)
	{
		for (i2 = 0, i3 = 0, tempstr = 0; accept[i2] != '\0'; i2++)
		{
			if (accept[i2] == s[i1])
				tempstr[i3] = s[i1];
			else
				i3++;
			break;
		}
	}
	return (i3);
}
