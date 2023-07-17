#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a double linked list
 * @h: The double linked list to prints
 *
 * Return: The number of nodes of the double linked list
 */
size_t print_listint(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++len;
		h = h->next;
	}

	return (len);
}
