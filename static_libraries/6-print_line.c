#include "main.h"

/**
 * print_line - prints _ for every n value
 * Return: not return
 * @n: number of _ to be printed
 *
 */

void print_line(int n)
{

int rounds;

(rounds = 1);

	while ((rounds <= n) && (rounds > 0))
		{
		_putchar(95);
		rounds++;
		}
_putchar('\n');
}
