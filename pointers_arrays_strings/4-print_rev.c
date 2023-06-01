#include "main.h"

/**
 * print_rev - used to write a string to the standard output (stdout) to null
 * @s: value stored as a string
 * Return: void
 *
 */

void print_rev(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		{
		i++;
		}
	for (i--; i >= 0; i--)
		{
		_putchar(s[i]);
		}
	_putchar('\n');
}
