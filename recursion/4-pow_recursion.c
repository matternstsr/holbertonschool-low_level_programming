#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - 
 * @n: factoral result
 * @y: 
 * Return:
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		{
		return (x * _pow_recursion(y - 1));
	}
	return (1);
}
