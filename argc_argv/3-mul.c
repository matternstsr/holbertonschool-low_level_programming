#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Counts the number of arguments that are passed
 * @argv: vector - Pointer of array of pointers containing strings
 * Return: Always 0 good
 */

int main(int argc, char *argv[])
{
	int valsum, val1, val2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		val1 = atoi(argv[1]);
		val2 = atoi(argv[2]);
		valsum = val1 * val2;
		printf("%d\n", valsum);
	}
	return (0);
}
