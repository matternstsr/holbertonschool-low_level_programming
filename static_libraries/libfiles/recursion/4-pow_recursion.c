#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - the value of the fact of x times y
 * @x: factoral result multiplied by y
 * @y: multiplier
 * Return: the value of the fact of x times y
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
