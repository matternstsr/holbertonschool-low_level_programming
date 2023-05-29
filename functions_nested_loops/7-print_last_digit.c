#include <stdio.h>
#include "main.h"

/**
  * print_last_digit - Calculates the last value using ascii.
  * @n: The number to be calculated.
  *
  * Return: returns the value of the last digit
  */

int print_last_digit(int n)
{
	int lastdig;

	lastdig = n % 10;

	if (lastdig < 0)
	{
		lastdig = lastdig * -1;
	}

	_putchar(lastdig + '0');

	return (lastdig);
}
