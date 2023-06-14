#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - prints the srint in reverse using recursion
 * @s: print a string with putchar using recursion
 *
 * Return: void
 */

void int _strlen_recursion(char *s)

{
	int x = 0;
	
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		x++;
	}
	return (x);
}
