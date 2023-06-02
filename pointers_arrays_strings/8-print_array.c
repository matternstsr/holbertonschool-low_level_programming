#include "main.h"
#include <stdio.h>

/**
 * print_array - used to print the array at the set value set by n
 * @a: array
 * @n: number of ints to print out of the array
 * Return: void
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
