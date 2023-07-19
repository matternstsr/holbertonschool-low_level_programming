#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the dll
 * @head: The d linked list
 * @n: The ammount needed
 * Return: pointer to new node location
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *old;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	else
	{
		old = *head;
		while (old->next != NULL)
			old = old->next;

		old->next = new;
		new->prev = old;
	}
	return (new);
}
