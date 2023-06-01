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
int lines, spaces;

if (n <= 0)
putchar('\n');
	for (lines = 0; lines < n; lines++)
	{
		for (spaces = 0; spaces < lines; spaces++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
