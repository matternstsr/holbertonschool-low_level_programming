#include "main.h"

/**
 * puts2 - used to pull every 2 char in a string value
 * @*str: pointer for a string str
 * Return: void
 *
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
