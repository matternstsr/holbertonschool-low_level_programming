#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint_end - Adds a new node to the end of a linked list
  * @head: The head of the linked list
  * @n: The value to add to the end of the linked list
  *
  * Return: The address of the new element, or NULL it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp_list, *tempspot;

	if (head)
	{
		temp_list = malloc(sizeof(listint_t));
		if (temp_list == NULL)
			return (NULL);

		temp_list->n = n;
		temp_list->next = NULL;

		if (*head == NULL)
		{
			*head = temp_list;
			return (*head);
		}
		else
		{
			tempspot= *head;
			while (tempspot->next)
				tempspot = tempspot->next;

			tempspot->next = temp_list;
			return (tempspot);
		}
	}

	return (NULL);
}
