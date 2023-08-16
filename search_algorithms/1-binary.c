#include "search_algos.h"


/**
 * binary_search - search
 *
 * @value : value
 * @size : size array
 * @array : input
 * Return: -1 or index
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = 0, idx;
	int middle = 0;

	left = 0;
	right = size - 1;

	if (!array)
		return (-1);
	while (left <= right)
	{
		middle = left + (right - left) / 2;
		printf("Searching in array: ");
		for (idx = left; idx <= right; idx++)
		{
			if (idx < right)
				printf("%i, ", array[idx]);
			else
				printf("%i\n", array[idx]);
		}
		if (array[middle] > value)
			right = middle - 1;
		else if (array[middle] < value)
			left = middle + 1;
		else
			return (middle);
	}
	return (-1);
}
