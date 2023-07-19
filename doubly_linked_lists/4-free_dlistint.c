#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t after freeing the nodes
 * @head: beginning of the linked list
 * Return: void (none)
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
