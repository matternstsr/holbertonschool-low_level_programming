#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the diagnal sums of a 2d array
 * @a: 2d array
 * @size: size of the array x,y
 * Return: void
 */

void print_diagsums(int *a, int size)
{
    int adv, result1 = 0, result2 = 0;

    for (adv = 0; adv < size; adv++)
    {
        result1 += a[(size + 1) * adv];
        result2 += a[(size - 1) * (adv + 1)];
    }

    printf("%d, %d\n", result1, result2);
}
