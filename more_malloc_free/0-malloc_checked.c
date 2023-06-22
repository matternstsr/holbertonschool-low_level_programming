#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - unction that allocates memory using malloc.
 *@b: unsigned int
 *Return: VOID Pointer
 */

void *malloc_checked(unsigned int b)
{
/* VOID pointer type used for unknown types of bytes */
/* malloc used to set the amount of memory */
/* if malloc fails to allocate the needed memory */
/* exit status value */
/* returns a pointer if not null */

	void *pointer;
	pointer = malloc(b)
	if (pointer == NULL)
	exit(98);
	return (pointer);
}
