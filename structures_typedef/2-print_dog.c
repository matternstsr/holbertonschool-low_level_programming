#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * print_dog - Prints the values of the vars with in dog
  * @d: structure type called dog
  *
  * Return: Nothing
  */
void print_dog(struct dog *d)
{
	printf("Name: %c\n", (d->name) ? d->name : "(nil)");
	printf("Age: %d\n", (d->age) ? d->age : 0);
	printf("Owner: %c\n", (d->owner) ? d->owner : "(nil)");
}
