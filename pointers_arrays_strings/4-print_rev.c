#include "main.h"

/**
 * print_rev - used to write a string to the standard output (stdout) to null
 * @s: value stored as a string
 * Return: void
 *
 */

void print_rev(char *s)
{
	while (*s)
		_putchar(*s--);

	_putchar('\n');
}