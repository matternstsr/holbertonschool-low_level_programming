#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n; 
	int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
(z = n % 10);
if (z > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",n ,z);
	}
	else if (z == 0)
	{
		printf("Last digit of %d is 0 and is 0\n",n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",n ,z);
	}
	return (0);
}
