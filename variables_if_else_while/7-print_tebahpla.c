#include <stdio.h>
/**
 * main - main function
 * Return: Return 0
 * letter - letter to be incrimented
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter <= 'a'; letter++)
	{
	if (letter != 'q' && letter != 'e')
		putchar(letter);
	}
		putchar('\n');
	return (0);
}
