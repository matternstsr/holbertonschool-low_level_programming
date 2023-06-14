#include "main.h"

/**
 * leet - capitalize all words of a string that arent already
 * @str: string provided
 *
 * Return: string array
 *
 */

char *leet(char *str)
{
int i, j;
char *letters = "aeotlAEOTL";
char *swap_vals = "4307143071";

for (i = 0; str[i] != '\0'; i++)
{
	for (j = 0; letters[j] != '\0'; j++)
	{
		if (str[i] == letters[j])
		{
			str[i] = swap_vals[j];
			break;
		}
	}
}
return (str);
}
