#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - combining of two strings one after the other.
 *@s1: main string to be added too.
 *@s2: sting that needs to be added to the main string.
 *@n: number of bytes to copied.
 *Return: char pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i, sizeofs1 = 0, sizeofs2 = 0;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + sizeofs1) != '\0')
		sizeofs1++;
	
	while (*(s2 + sizeofs2) != '\0')
		sizeofs2++;

	if (sizeofs2 >= n)
		sizeofs2 = n;
	string = malloc(sizeofs1 + n + 1);
	
	if (string == NULL)
		return (string);
	
	for (i = 0; i < sizeofs1; i++)
		string[i] = s1[i];

	for (i = 0; i < n; i++)
		string[i + sizeofs1] = s2[i];

	string[sizeofs1 + i] = '\0';
	return (string);
}
