#include <stdio.h>
#include "main.h"

/**
 * print_sign - Checks if a character is -1,1,0
 * @n: Variable Input.
 *
 * Return: Returns -1,1,0,+,-,0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
