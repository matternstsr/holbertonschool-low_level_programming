#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints the diagnal sums of a 2d array
 * @s: print a string with putchar using recursion
 *
 * Return: void
 */

void _puts_recursion(char *s)

{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	n--;
	_puts_recursion(s - 1);
}
