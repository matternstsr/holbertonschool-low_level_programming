#include "main.h"

/**
 * rev_string - used to write a string to the standard output (stdout) to null
 * @s: value stored as a string
 * Return: void
 *
 */

void rev_string(char *s)
{
	char *begin = s;
	char *end = s + strlen(s) - 1;
	char temp;

	while (begin < end)
	{
		temp = *begin;
		*begin = *end;
		*end = temp;
		begin++;
		end--;	
		}
}
