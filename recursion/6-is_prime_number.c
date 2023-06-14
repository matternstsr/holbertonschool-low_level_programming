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
	int is_it_really = value % value;

	if (is_it_really > n)
		return (-1);
	if (is_it_really == n)
		return (value);
	return (_is_it_really(n, value + 1));
}


/**
  * is_prime_number - compares and returns the prime of a number
  * @n: number to calculate the prime number if there is one
  *
  * Return: the square root  after comparing
  */

int is_prime_number(int n)
{
	return (_is_it_really (n, 1));
}
