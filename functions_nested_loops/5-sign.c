#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @n: Variable Input.
 *
 * Return: Returns 1 and prints + if n is greater than zero
 * Return: Returns 0 and prints 0 if n is zero
 * Return: Returns -1 and prints - if n is less than zero
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
