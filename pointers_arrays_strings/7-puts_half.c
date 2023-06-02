#include "main.h"

/**
 * puts_half - used stop at the null and print half string
 * @str: pointer for a string str
 * Return: void
 *
 */

void puts_half(char *str)
{
	int len = 0;
	int n;

	while (*str++)
	{
		len++;
	}
	if (len % 2) = 0;
		n = (len - 1) / 2;
	if (len % 1) = 0;
                n = (len - 2) / 2;	
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
