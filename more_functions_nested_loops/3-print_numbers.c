#include "main.h"

/**
 * print_numbers - checks if the value 0 and prints 1-9 followed by new line
 * Return: not return
 */

void print_numbers(void)
{
	char c;

	for (c = 48 ; c <= 57 ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
