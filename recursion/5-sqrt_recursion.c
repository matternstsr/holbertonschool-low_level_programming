#include "main.h"
#include <stdio.h>

/**
  * _sqareroute - Calculates square root
  * @n: number to calculate the square root
  * @value: number to calc the sqareroute
  *
  * Return: the square root  after comparing
  */

int _sqareroute(int n, int value)
{
	int sqareroute = value * value;
	if (sqareroute > n)
		return (-1);
	if (sqareroute == n)
		return (value);
	return (_sqareroute(n, value + 1));
}


/**
  * _sqrt_recursion - compares and eturns the square root of a number
  * @n: number to calculate the natural square root
  *
  * Return: the square root  after comparing
  */
int _sqrt_recursion(int n)
{
	return (_sqareroute(n, 1));
}
