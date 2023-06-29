#include <stdlib.h>
#include "function_pointers.h"

/**
  * print_name - function allows user to use the function to print name.
  * @name: name of varible that is being printed but another function.
  * @f: pointer to the function that us passed.
  */

void print_name(char *name, void (*f)(char *))
{
f(name)
}











































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