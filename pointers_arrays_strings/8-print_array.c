#include "main.h"

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
		printf("%d", a[i]);
			printf(", ");
	}
	printf("\n");
}
