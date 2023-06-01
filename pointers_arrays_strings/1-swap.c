#include "main.h"

/**
 * rswap_int - swaps the two pntrs a and b
 * @c: the value holder of a pointer while changing values
 * Return: void
 *
 */

void swap_int(int *a, int *b);

{

int c;
int d;

c = *a;
d = *b;
*a = d;
*b = c;

}
