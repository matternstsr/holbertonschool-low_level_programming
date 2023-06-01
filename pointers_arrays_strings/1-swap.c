#include "main.h"

/**
 * swap_int - swaps the two pntrs a and b
 * @a: value 1 to be swapped
 * @b: value 2 to be swapped
 * Return: void
 *
 */

void swap_int(int *a, int *b)

{

int c;
int d;

c = *a;
d = *b;
*a = d;
*b = c;

}
