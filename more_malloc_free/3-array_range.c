#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * array_range - function that allocates memory for an array using malloc
  * @min: min (included) elements
  * @max: max (included) elements
  *
  * Return: returns the pointer to the newly created array
  */

int *array_range(int min, int max)
{
	int *arr, inc = 0;

	if ((min > max) || (arr == NULL))
		return (NULL);

	arr = malloc((sizeof(int) * (max - min)) + sizeof(int));
	while (min < max)
	{
		arr[inc] = min;
		inc++;
		min++;
	}

	return (arr);
}
