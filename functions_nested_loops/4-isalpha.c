#include <stdio.h>
#include "main.h"
/**
 *c - cholds the value of a-z and A-Z
 *_isalpha - function to check for lower and upper character
 *Return: 1 if c is lower or upper, else 0
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);

	else

		return (0);

}
