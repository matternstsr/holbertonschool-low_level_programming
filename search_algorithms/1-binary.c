#include "search_algos.h"

/**
 * binary_search - search using binary search algorithm
 *
 * @array: array of values
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    if (!array || size == 0)
        return -1;

    size_t left = 0;
    size_t right = size - 1;
    size_t middle;

    while (left <= right)
    {
        middle = left + right / 2;

        if (array[middle] == value)
            return (middle);
        else if (array[middle] < value)
            left = middle + 1;
        else
            right = middle - 1;
    }
    return (-1);
}
