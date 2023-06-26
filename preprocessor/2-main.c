#include "main.h"
#include <stdio.h>
#include <stdlib.h

/**
 * main - prints the name of the file using macros __FILE__ 
 * Return: 0
 */
int main(void)
{
	printf("%s\in", __FILE__);
	return (0);
}
