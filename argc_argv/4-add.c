#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the sum of args positive numbers ONLY
 * @argc: count of arguments passed
 * @argv: vector of argument strings
 *
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	int loopinc;
	unsigned int strleninc, sum = 0;
	char *stringinvector;

	if (argc > 1)
	{
		for (loopinc = 1; loopinc < argc; loopinc++)
		{
			stringinvector = argv[loopinc];

			for ( strleninc = 0;  strleninc < strlen(stringinvector); strleninc++)
			{
				if (stringinvector[strleninc] < 48 || stringinvector[strleninc] > 57)
				{
					printf("Error\n");
					return ('1');
				}
			}
			sum += atoi(stringinvector);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

