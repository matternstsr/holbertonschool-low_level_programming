#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - frees a listint_t list.
  * @head: points to the head of the list
  *
  * Return: returns 0
  */
void free_listint2(listint_t **head)
{
	listint_t *storeit

	if (head)
	{
		while (*head)
		{
			storeit = (*head);
			*head = (*head)->next;
			free(storeit);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
