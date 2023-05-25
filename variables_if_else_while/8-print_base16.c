#include <stdio.h>
/**
 * main - main loops
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;

	for (b = 0; b < 10; b++)
	{
		putchar(b + '0');
	}
	for (a = 'a'; a < 'g'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
