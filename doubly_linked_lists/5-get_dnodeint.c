#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: The linked list
 * @index: The numerical position
 * Return: Location of specified node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *stored = head;

	for (count = 0; count < index; count++)
	{
		if (stored == NULL)
			return (NULL);
		stored = stored->next;
	}

	return (stored);
}
