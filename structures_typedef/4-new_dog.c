#include <stdlib.h>
#include "dog.h"

/**
  * new_dog - function that creates a new dog.
  * @name: name of the dog varible name
  * @age: age of the dog varible age
  * @owner: owner of the dog of the varible owner
  *
  * Return: NULL if failes or 
  */

dog_t *new_dog(char *name, float age, char *owner)


int _strlen(char *s);
char *_strcpy(char *dest, char *src);


{
	dog_t *new_dog;
	int stupid_name = 0;
	int poor_owner = 0;

	if (name != NULL && owner != NULL)
	{
		stupid_name = _strlen(name) + 1;
		poor_owner = _strlen(owner) + 1;
		new_dog = malloc(sizeof(dog_t));

		if (new_dog == NULL)
			return (NULL);

		new_dog->name = malloc(sizeof(char) * stupid_name);

		if (new_dog->name == NULL)
		{
			free(new_dog);
			return (NULL);
		}

		new_dog->owner = malloc(sizeof(char) * poor_owner);

		if (new_dog->owner == NULL)
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}

		new_dog->name = _strcpy(new_dog->name, name);
		new_dog->owner = _strcpy(new_dog->owner, owner);
		new_dog->age = age;
	}

	return (new_dog);
}

/**
  * _strlen - Returns string length
  * @s: counted string that is passed
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int counter = 0;

	for (; *s != '\0'; s++)
			counter++;
	return (counter);
}

/**
  * _strcpy - string that is copied after passed
  * @dest: ending value
  * @src: Starting value
  *
  * Return: dest (ending value)
  */
char *_strcpy(char *dest, char *src)
{
	int loc;

	for (loc = 0; src[loc] != '\0'; loc++)
	{
		dest[loc] = src[loc];
	}

	dest[loc++] = '\0';

	return (dest);
}
