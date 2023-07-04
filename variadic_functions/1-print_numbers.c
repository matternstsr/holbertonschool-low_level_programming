#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - function that prints numbers, followed by a new line.
  * @separator: separator is the string to be printed between numbers.
  * @n: n is the number of integers passed to the function.
  *
  * Return: Print a new line at the end of your function - 0
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int inc = 0;

	if (n > 0)
	{
		va_start(arguments, n);

		while (inc < n)
		{
			printf("%d", va_arg(arguments, int));

			if (inc != n - 1  && separator != NULL)
				printf("%s", separator);

			inc++;
		}
		va_end(arguments);
	}
	printf("\n");
}
