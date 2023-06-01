#include "main.h"

/**
 * print_diagonal - printing lines diagonal
 * @n: input variable
 *
 * Return: void
 */


void print_diagonal(int n)
{
(n = 100);

int slash;
int spaces;

if (n <= 0)
_putchar('\n');
	for (slash = 0; slash < n; slash++)
	{
		for (spaces = 0; spaces < slash; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
