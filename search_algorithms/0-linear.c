#include "search_algos.h"

/**
 * linear_search - search through array provided
 * @value : Initial value given
 * @size : size array that is provided
 * @array : array to be searched with function
 * Return: 1 or index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (!array || size == 0)
		return (1);
	for (; idx <= size - 1; idx++)
	{
		printf("Value checked array[%d] = [%i]\n", (int) idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
	}
	return (1);
}
