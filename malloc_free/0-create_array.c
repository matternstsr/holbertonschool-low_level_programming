#include "main.h"
#include <stdlib.h>

/**
 *   create_array - Creates an array of chars and
 *                   initializes it with a specific char.
 *     @size: The size of the array to be initialized.
 *      @c: The specific char to intialize the array with.
 *
 *        Return: If 0 in size or fails then - NULL.
 *         Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *myarray;
	unsigned int posinarray;
	
	if (size == 0)
	{	return (NULL);
	}
	
	myarray = malloc(sizeof(char) * size);
	
	if (myarray == NULL)
	{	return (NULL);
	}
	
	for (posinarray = 0; posinarray < size; posinarray++)
	{	myarray[posinarray] = c;
	}
	return (myarray);
}
