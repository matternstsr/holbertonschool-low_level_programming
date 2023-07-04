#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - function that returns the sum of a and b 
  * @a: varible for value a
  * @b: varible for value b
  *
  * Return: returns the sum of a and b
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - function that returns the sub of a and b
  * @a: varible for value a
  * @b: varible for value b
  *
  * Return: returns the sub of a and b
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - function that returns the mul of a and b
  * @a: varible for value a
  * @b: varible for value b
  *
  * Return: returns the mul of a and b
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - function that returns the div of a and b
  * @a: varible for value a
  * @b: varible for value b
  *
  * Return: returns the div of a and b
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - function that returns the mod of a and b
  * @a: varible for value a
  * @b: varible for value b
  *
  * Return: returns the mod of a and b
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
