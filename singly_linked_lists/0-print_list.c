size_t print_list(const list_t *h)
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_list - Prints all elements of a list
  * @h: A linked list
  *
  * Return: The number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t ct = 0;

	while (h)
	{
		if !(h->string)
			printf("[0] (nil)\n");
		else
			ct += printf("[%d] %s\n", h->length, h->string);

		h = h->nextone;
	}

	return (ct);
}
