#include "main.h"
#include <stdio.h>

/**
 * _strstr - searches string till it find a char def by c or null if not.
 * @haystack: initial string
 * @needle: info that is selected for comparison.
 * Return: the chars that match as the point to that char
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int g = 0;

	if (needle[i] == '\0')
		return (&haystack[g]);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			j++;
			if (g == 0)
			{
				g = i;
			}
			if (needle[j] == '\0')
				return (&haystack[g]);
		}
		else
		{
			g = 0;
			j = 0;
		}
		i++;
	}
	return (NULL);
}
