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

	while (!(h))
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			ct += printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}

	return (ct);
}
