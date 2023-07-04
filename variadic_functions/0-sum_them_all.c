#include "variadic_functions.h"

/**
  * sum_them_all - function that returns the sum of all its parameters.
  * @n: perameter brought in through n
  *
  * Return: If n == 0, return 0
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int inc = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(arguments, n);

		while (inc < n)
		{
			sum += va_arg(arguments, int);
			inc++;
		}

		va_end(arguments);
		return (sum);
	}

	return (0);
}
