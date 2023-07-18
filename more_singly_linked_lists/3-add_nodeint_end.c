#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - Adds a new node at the beginning of a linked list
  * @head: The head of the linked list
  * @n: The value to add to the new node
  *
  * Return: The address of the new element, or NULL it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new2_list;

	if (head != NULL)
	{
		new2_list = malloc(sizeof(listint_t));
		if (new2_list == NULL)
			return (NULL);

		new2_list->n = n;
		new2_list->next = *head;
		*head = new2_list;

		return (new2_list);
	}

	return (NULL);
}
