#include "main.h"

/**
 * _isdigit - checks if the value of c is a digit
 * @c: used to hold the testing value uppper or lower letter
 * Return: prints 1 if digit and 0 if not
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		{
		return (1);
		}
	else
		return (0);
}
