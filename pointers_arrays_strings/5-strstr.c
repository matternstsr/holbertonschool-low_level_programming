#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches string till it find a char def by c or null if not.
 * @s: initial string
 * @accept: info that is selected for comparison.
 * Return: the chars that match as the point to that char
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int g = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
				j++;
			if (haystack[i] == '\0')
				return (&haystack[g]);
			if (g == 0)
				{
					g++;
				}
			else
			{
				g = 0;
				j = 0;
				break;
			}
								

		}
		i++;
	}
	return (NULL);
}
