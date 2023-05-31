#include "main.h"

/**
 * print_numbers - checks if the value 0 and prints 1-9 followed by new line
 * Return: not return
 */

void print_most_numbers(void)
{
	char c;

	for (c = 48 ; c <= 57)
		if ((c == 50) || (c == 52))
		{
		c++;
		}
		else
		{
		_putchar(c);
		c++;
		}	
	_putchar('\n');
}
