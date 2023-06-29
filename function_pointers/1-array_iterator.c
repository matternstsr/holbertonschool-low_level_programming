#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * array_iterator - function that itereates through array while doing action
  * @array: array of chars running against action
  * @size: size of the array that we are itterating
  * @action: what we are doing to the array as we itterate
  *
  * Return: 
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int incr = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (incr < size)
		{
			action(array[incr]);
			incr++;
		}
	}
}
