#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - prints the srint in reverse using recursion
 * @s: print a string with putchar using recursion
 *
 * Return: void
 */

int _strlen_recursion(char *s)

{
	unsigned int x = 0;
	
	if (*s != '\0')
	{	
		x++;
		goto doittoit;
	}
doittoit:
	{
		_strlen_recursion(s + 1);
	}
	return (x);
}
