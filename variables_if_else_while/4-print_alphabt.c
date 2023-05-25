#include <stdio.h>
/**
 * main - main function
 * Return: Return 0
 * letter - letter to be incrimented
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
        if (letter != 'q' && letter != 'e')
                putchar(letter);
	}
		putchar('\n');
	return (0);
}
