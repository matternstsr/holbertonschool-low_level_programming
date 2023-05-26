#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)

{
	int loop10 = 0;
	while (loop10 < 10)
	{	
		int letters = 'a';
		while (letters <= 'z')
		{
			_putchar(letters);
			letters++;
		}
		_putchar('\n');
		loop10++;
	}
}
