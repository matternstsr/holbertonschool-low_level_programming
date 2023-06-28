#include <stdlib.h>
#include "dog.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - function that creates a new dog.
  * @name: name of the dog varible name
  * @age: age of the dog varible age
  * @owner: owner of the dog of the varible owner
  *
  * Return: NULL if failes or print dumb_mutt.
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dumb_mutt;
	int stupid_name = 0;
	int poor_owner = 0;

	if (name != NULL && owner != NULL)
	{
		stupid_name = _strlen(name) + 1;
		poor_owner = _strlen(owner) + 1;
		dumb_mutt = malloc(sizeof(dog_t));

		if (dumb_mutt == NULL)
			return (NULL);

		dumb_mutt->name = malloc(sizeof(char) * stupid_name);

		if (dumb_mutt->name == NULL)
		{
			free(dumb_mutt);
			return (NULL);
		}

		dumb_mutt->owner = malloc(sizeof(char) * poor_owner);

		if (dumb_mutt->owner == NULL)
		{
			free(dumb_mutt->name);
			free(dumb_mutt);
			return (NULL);
		}

		dumb_mutt->name = _strcpy(dumb_mutt->name, name);
		dumb_mutt->owner = _strcpy(dumb_mutt->owner, owner);
		dumb_mutt->age = age;
	}

	return (dumb_mutt);
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
