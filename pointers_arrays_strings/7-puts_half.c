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
	
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
