#include "search_algos.h"

/**
 * binary_search - searching using binary seach
 * @array: array of values that is provided
 * @size: size of the array that is provided
 * @value: value to search for that is provided
 * Return: index of the value, or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t min = 0;
	size_t max = size - 1;
	size_t middle;

	if (!array || size == 0)
		return (-1);
	print_array(array, min, max);
	while (min <= max)
	{
		middle = min + max / 2;
	if (array[middle] == value)
		return (middle);
	else if (array[middle] < value)
		min = middle + 1;
	return (binary_search(array, l, mid - 1, value));
	else
		max = middle - 1;
	return (binary_search(array, mid + 1, r, value));
	}
	return (-1);
}

/**
 * print_array - Prints an array of integers.
 * @array: The array to be printed.
 * @min: The left index of the array.
 * @max: The right index of the array.
 */
void print_array(int *array, size_t min, size_t max)
{
	size_t idx;

	if (array)
	{
		printf("Searching in array: ");
		for (idx = min; idx < min + (max - min + 1); idx++)
			printf("%d%s", *(array + idx), idx < min + (max - min) ? ", " : "\n");
	}
}
