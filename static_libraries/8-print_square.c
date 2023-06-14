#include "main.h"

/**
 * print_square - printing # - shape of square base on size.
 * @size: used to determin the sixe of the square
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
			_putchar('#');
		}
		_putchar('\n');
	}
}
