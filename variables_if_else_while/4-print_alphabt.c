#include <stdio.h>
/**
 * main - main function
 * Return: Return 0
 * letter - letter to be incrimented
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'd'; letter++)
		putchar(letter);
	for (letter = 'f'; letter <= 'p'; letter++)
                putchar(letter);
        for (letter = 'r'; letter <= 'z'; letter++)
                putchar(letter);
        for (letter = 'A'; letter <= 'Z'; letter++)
                putchar(letter);
	{
		putchar('\n');
	}
		return (0);
}
