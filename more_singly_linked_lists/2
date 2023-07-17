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
	listint_t *2nd_list;

	if (head != NULL)
	{
		2nd_list = malloc(sizeof(listint_t));
		if (2nd_list == NULL)
			return (NULL);

		2nd_list->n = n;
		2nd_list->next = *head;
		*head = 2nd_list;

		return (2nd_list);
	}

	return (NULL);
}
