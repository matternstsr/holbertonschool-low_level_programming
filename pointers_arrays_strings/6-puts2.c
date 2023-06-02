#include "main.h"

/**
 * puts2 - used to pull every 2 char in a string value
 * @str: pointer for a string str
 * Return: void
 *
 */

void puts2(char *str)
{
	int a;
	int b;

	(b = 0);

	while (str[b] != '\0')
	{
		b++;
	}

	for (a = 0; a < b; a += 2)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
