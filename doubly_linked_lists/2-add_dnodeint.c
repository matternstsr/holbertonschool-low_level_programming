#include "lists.h"

/**
 * add_dnodeint - adds a new node at beginning of linked list
 * @head: The linked list
 * @n: The added amount
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *old;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}

	else
	{
		old = *head;
		old->prev = new;
		new->next = old;
		*head = new;
	}
	return (new);
}
