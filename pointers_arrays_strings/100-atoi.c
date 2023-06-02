#include "main.h"

/**
 * _atoi - Changes a string to an integer.
 * @s: the string that will be changed.
 *
 * Return: the string in a integer form.
 */
int _atoi(char *s)
{
	int msigns;
	(msigns= 1);
	int numbers = 0;

	do {
		if (*s == '-')
			msigns *= -1;
		else if (*s >= '0' && *s <= '9')
			numbers = (numbers * 10) + (*s - '0');
		else if (numbers > 0)
			break;
	}
	while (*s++);
	return (numbers * msigns);
}
