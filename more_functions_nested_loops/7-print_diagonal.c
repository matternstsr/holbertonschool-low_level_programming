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
int lines;
int spaces;

if (n <= 0)
_putchar('\n');
	for (lines = 0; lines < n; lines++)
	{
		for (spaces = 0; spaces < lines; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
