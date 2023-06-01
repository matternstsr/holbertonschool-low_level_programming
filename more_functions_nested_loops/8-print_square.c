#include "main.h"

/**
 * print_square - printing x - shape of square base on size.
 * @shape: routine for size per lines.
 * @xs: Amount of x's printed per line.
 *
 * Return: void
 */

void print_square(int size)

{
int shape;
int xs;

if (size <= 0)
_putchar('\n');
        for (shape = 0; shape < size; shape++)
	{
		for (xs = 0; xs < size; xs++)
		{
			_putchar('x');
		}
		_putchar('\n');
	}
}
