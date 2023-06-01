#include "main.h"

/**
 * print_triuangle - printing lines diagonal while filling in the back
 *
 * Return: void
 */

void print_triangle(int size)

{
	int spaces;
	int fillin;
	int total;
	int incr;

	if (size <= 0)
		_putchar('\n');
	(total = size - 1);
	(incr = 1);
	for (spaces = 0; spaces < size; spaces++)
	{
		for (fillin = 0; fillin < total; fillin++)
		{
			_putchar(' ');
		}
		_putchar('#');
		while (total + incr < size)
		{
			_putchar('#');
			fillin++;
			incr++;
		}
		(incr = 1);
		_putchar('\n');
		total--;
	}
}
