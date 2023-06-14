#include "main.h"
#include <stdio.h>

/**
 * factorial - prints the factoral or 0/1
 * @n: factoral result
 *
 * Return: void
 */


int factorial(int n)
{
	if (n > '0')
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
