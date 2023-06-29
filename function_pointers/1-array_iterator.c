#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
  * array_iterator - function that itereates through array while doing action
  * @array: array of chars running against action
  * @size: size of the array that we are itterating
  * @action: what we are doing to the array as we itterate
  *
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t incr = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (incr < size)
		{
			action(array[incr]);
			incr++;
		}
	}
}
