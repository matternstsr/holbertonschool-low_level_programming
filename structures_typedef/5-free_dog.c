#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - frees the dog.
  * @d: pointer to the dog house
  * Return: cleans the dog house out.
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
