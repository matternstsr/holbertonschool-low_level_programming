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
	for (hours = 0; hours <= 2; hours++)
	{
		for (minutes = 0; minutes <= 9; minutes++)
		{
			if ((hours <= 1 && minutes <= 9) || (hours <= 2 && minutes <= 3))
			{
				for (seconds = 0; seconds <= 5; seconds++)
				{
					for (milliseconds = 0; milliseconds <= 9; milliseconds++)
					{
						_putchar(hours + '0');
						_putchar(minutes + '0');
						_putchar(58);
						_putchar(seconds + '0');
						_putchar(milliseconds + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
