#include "main.h"

/**
 * print_numbers - checks if the value 0 and prints 1-9 followed by new line
 * @c: used to hold the value of 0-9
 * Return: not return
 */

void print_numbers(void)
{
	int c;
	(c = 48);
	while (c <= 57)
		{
		_putchar(c);
		c++;
		}

	else
		{
		_putchar('\n')
		}
}
