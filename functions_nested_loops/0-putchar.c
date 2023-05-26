#include "main.h"
/**
 * main - main function .
 *
 * Return: 0
 */
int main(void)
{
	char a[] = "_putchar";
	int s = sizeof(a);
	int i;
	
	for (i = 0; i < s; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
	return (0);
}
