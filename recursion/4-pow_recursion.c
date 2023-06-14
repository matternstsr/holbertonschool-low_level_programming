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
		return (y * _pow_recursion(x - 1));
	}
	return (1);
}
