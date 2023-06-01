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
(size = 6);
int shape;
int xs;

if (size <= 0)
putchar('\n');
        for (shape = 0; shape < size; shape++)
	{
		for (xs = 0; xs < size; xs++)
		{
			putchar('x');
		}
		putchar('\n');
	}
}
