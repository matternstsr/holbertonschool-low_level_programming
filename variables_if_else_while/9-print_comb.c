#include <stdio.h>
/**
 * main - main function
 * Return: Return 0
 */
int main(void)
{
	int a = 0;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		putchar(',');
	}

	putchar('\n');
	return (0);
}
