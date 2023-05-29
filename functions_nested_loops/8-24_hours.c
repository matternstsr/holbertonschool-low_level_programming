#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int milliseconds = 0;
	int seconds = 0;
	int minutes = 0;
	int hours = 0;

	for (milliseconds = 0; milliseconds <= 2; milliseconds++)
	{
		for (seconds = 0; seconds <= 9; seconds++)
		{
			if ((milliseconds <= 1 && seconds <= 9) ||
				       	(milliseconds <= 2 && seconds <= 3))
			{
				for (minutes = 0; minutes <= 5; minutes++)
				{
					for (hours = 0; hours <= 9; hours++)
					{
						_putchar(milliseconds + '0');
						_putchar(seconds + '0');
						_putchar(58);
						_putchar(minutes + '0');
						_putchar(hours + '0');
						_putchar('\n');
					}
				}
			}
		}

	}
}
