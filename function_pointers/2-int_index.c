#include "function_pointers.h"

/**
  * int_index - indexx with in the array 
  * @array: array that is storing the values
  * @size: size of the array that is passed
  * @cmp: function that is passed that provides the value of comparision.
  *
  * Return: If no element matches, return -1, If size <= 0, return -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int incr = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (incr < size)
			{
				if (cmp(array[incr]))
					return (incr);

				incr++;
			}
		}
	}

	return (-1);
}
