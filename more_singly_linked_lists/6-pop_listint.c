#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - func del the head node of a listint_t link list, returns the head node’s data (n).
  * @head: end of the list
  *
  * Return: returns n - if the linked list is empty return 0
  */
int pop_listint(listint_t **head)
{
	listint_t *change_head;
	int n = 0;

	if (*head != NULL)
	{
		change_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = change_head;
	}

	return (n);
}
