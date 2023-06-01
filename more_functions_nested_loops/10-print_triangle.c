#include "main.h"

/**
 * print_triuangle - printing lines diagonal while filling in the back
 * 
 *
 * Return: void
 */

void print_triangle(int size)

{
	int spaces;
	int fillin;
	int total;
	int incr;
	int size;

	(size = 6);
	if (size <= 0)
		putchar('\n');
	(total = size -1);
	(incr = 1);
	for (spaces = 0; spaces < size; spaces++)
	{
		for (fillin = 0; fillin < total; fillin++)
		{
			putchar(' ');
		}
		putchar('#');
		while (total + incr < n)
		{
			putchar('#');
			fillin++;
			incr++;
		}
		(incr = 1);
		putchar('\n');
		total--;
	}
}
