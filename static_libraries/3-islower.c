#include <stdio.h>
#include "main.h"
/**
 * _islower - function to check for lowercase character
 * @c: Variable Input.
 *
 * Return: 1 if c is lower, else 0
 */



int _islower(int c)
{

	if (c >= 'a' && c <= 'z')

		return (1);

	else

		return (0);

}
