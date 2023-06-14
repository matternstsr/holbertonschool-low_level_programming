#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints the srint in reverse using recursion
 * @s: print a string with putchar using recursion
 *
 * Return: void
 */

void _print_rev_recursion(char *s)

{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
