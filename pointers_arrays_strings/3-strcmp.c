#include "main.h"

/**
  * _strcmp - Compares two provided strings
  * @s1: string 1 values
  * @s2: string 2 values
  *
  * Return: int value
  */

int _strcmp(char *s1, char *s2)
{
	int str1i = 0, str2i = 0, currentpos = 0, retval = 0, lenshortrstr;
	while (s1[str1i])
	{
		str1i++;
	}
	while (s2[str2i])
	{
		str2i++;
	}
	if (str1i < str2i)
	{
		lenshortrstr = str1i;
	}
	else
	{
		lenshortrstr = str2i;
	}
	while (currentpos < lenshortrstr)
	{
		if (s1[currentpos] == s2[currentpos])
		{
			currentpos++;
			continue;
		}
		else
		{
			retval = s1[currentpos] - s2[currentpos];
			break;
		}
		currentpos++;
	}
	return (retval);
}
