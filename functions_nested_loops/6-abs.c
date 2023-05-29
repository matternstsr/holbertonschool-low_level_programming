#include <stdio.h>
#include "main.h"

/**
  * _abs - Calculates the absolute value of an integer.
  * @c: The number to be computed.
  *
  * Return: Absolute value of number or zero
  */

int _abs(int n)
{
    if (n < 0)
        return (-n);
    else
        return (n);
}
