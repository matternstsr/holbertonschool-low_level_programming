#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _calloc - function that allocates memory for an array using malloc
  * @nmemb: number of elements
  * @size: bytes of each 
  * return: returns a pointer to the allocated memory.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int ai = 0;
	int len = 0;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;
	arr = malloc(len);

	if (arr == NULL)
		return (NULL);

	while (ai < len)
	{
		arr[ai] = 0;
		ai++;
	}

	return (arr);
}
