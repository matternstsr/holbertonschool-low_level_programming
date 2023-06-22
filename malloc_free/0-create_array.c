#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array and puts a char in it.
 * @size: size of the array.
 * @c: Char that is for setting the array position
 * Return: If 0 in size or fails then - NULL or pt to array if true.
 */

char *create_array(unsigned int size, char c)
{
	char *myarray;
	unsigned int posinarray;

	if (size == 0)
	{
		return (NULL);
	}
	myarray = malloc(sizeof(char) * size);
	if (myarray == NULL)
	{
		return (NULL);
	}
	for (posinarray = 0; posinarray < size; posinarray++)
	{
		myarray[posinarray] = c;
	}
	return (myarray);
}
