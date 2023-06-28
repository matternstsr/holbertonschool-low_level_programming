#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * init_dog - function that sets the vallues for the new type dog
  * @d: passed varible storing dog type.
  * @name: passed value of name for dog.
  * @age: passed value of age for dog.
  * @owner:passed value of the owner of dog.
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
