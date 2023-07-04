#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - function that prints strings, followed by a new line.
  * @separator: separator is the string to be printed between the strings.
  * @n: n is the number of strings passed to the function
  *
  * Return: Print a new line at end of func, if sep or one string not null.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int inc = 0;
	char *string;

	if (n > 0)
	{
		va_start(arguments, n);

		while (inc < n)
		{
			string = va_arg(arguments, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (inc != n - 1 && separator != NULL)
				printf("%s", separator);

			inc++;
		}

		va_end(arguments);
	}

	printf("\n");
}
