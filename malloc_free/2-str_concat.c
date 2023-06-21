#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: initial string to be added to.
 * @s2: string to add to s1.
 * Return: if cant add then NULL. if not then point to strings together.
 */

char *str_concat(char *s1, char *s2)
{
	char *combstr;
	int i;
	int ic = 0;
	int len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	for (i = 0; s2[i]; i++)
		len++;
	len++;
	combstr = malloc(sizeof(char) * len);
	if (combstr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		combstr[ic++] = s1[i];
	for (i = 0; s2[i]; i++)
		combstr[ic++] = s2[i];
	return (combstr);
}
