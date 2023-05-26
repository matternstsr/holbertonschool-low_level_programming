#include <stdio.h>
/**
 *
 *
 *Return: 1 if c is lower, else 0
 *_islower - function to check for lowercase character
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')

		return (1);

	else

		return (0);

}
