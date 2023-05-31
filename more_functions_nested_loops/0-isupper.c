#include "main.h"

/**
 * _isupper - prints 1 if uppper and 0 if lower
 * @c: used to hold the testing value uppper or lower letter
 * Return: prints 1 if uppper and 0 if loower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);
	else

		return (0);
}
