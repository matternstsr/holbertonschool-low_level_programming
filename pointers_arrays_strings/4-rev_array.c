#include "main.h"

/**
  * reverse_array - reverses the array
  * @a: pointer to the value of a
  * @n: number of ints in the array
  *
  * Return: 0
  */

void reverse_array(int *a, int n)
{
	int *p = a;
	int i = 1;
	int x;
	int j = 0;

	while  (i < n)
	{
		i++;
		p++;
	}
	while (j < i / 2)
	{
		x = a[j];
		a[j] = *p;
		*p = x;
		p--;
	}
}
