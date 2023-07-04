#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - main function pulling in sub functions
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: ...
  */

int main(int argc, char *argv[])

{
	int (*opfunprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opfunprt = get_op_func(argv[2]);

	if (!opfunprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", opfunprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
