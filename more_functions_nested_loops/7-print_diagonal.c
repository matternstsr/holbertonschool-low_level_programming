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
int bslashes;
int spaces;

if (n <= 0)
_putchar('\n');
	for (blsashes = 0; bslashes < n; bslashes++)
	{
		for (spaces = 0; spaces < bslashes; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
