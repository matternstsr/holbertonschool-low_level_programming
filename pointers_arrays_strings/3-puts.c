#include "main.h"

/**
 * _puts - used to write a string to the standard output (stdout) to null
 * @str: value stored as a string
 * Return: void
 *
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
