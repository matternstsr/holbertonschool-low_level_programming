#include "main.h"

/**
 * more_numbers - prints 1-14 x 10 followed by new line
 * Return: not return
 *
 */

void more_numbers(void)
{
	char c;
	int r;

	c = '0';
	r = '1';

	for (r = 1 ; r <= 10; r++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			_putchar('1');
			_putchar(c % 10 + '0');
		}
	_putchar('\n');
	}
}
