#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
  * print_to_98 - Prints until it reaches 98
  * @int n - value to be incrimented up or down
  * Return: empty output
  */

void print_to_98(int n)
{
	while (n != 98)
	{
	printf("%d, ", n);
	if (n > 98)
		n--;
	else
		n++;
	}
	printf("%d\n", n);
}
