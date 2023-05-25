#include <stdio.h>
/**
 * main - main function
 * Return: Return 0
 */
int main(void)
{
	int a = 0;

	for (a = 10; a < 99; a++)
	{
		putchar(a);
		putchar(',');
	}

	putchar('\n');
	return (0);
}
