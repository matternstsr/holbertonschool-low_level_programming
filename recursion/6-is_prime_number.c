#include "main.h"
#include <stdio.h>

/**
  * _is_it_really - Calculates the prime of n
  * @n: number to calculate the prime number if there is one
  * @value: number to calc the prime numnber if there is one
  *
  * Return: the square root  after comparing
  */

int _is_it_really(int n, int value)
{
	if (n < 2 || n % value == 0)
	{
		return (0);
	}
	else if (value > (n / 2))
	{
		return (1);
	}
	else
		return (_is_it_really((value + 1), n));
}


/**
  * is_prime_number - compares and returns the prime of a number
  * @n: number to calculate the prime number if there is one
  *
  * Return: the square root  after comparing
  */

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (_is_it_really(n, 2));
}
