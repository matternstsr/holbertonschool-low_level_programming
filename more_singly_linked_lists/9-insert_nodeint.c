#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - function that inserts a new node at a given position.
  * @head: head of the list
  * @idx: spot of the list where the new node should be added. Index starts at 0
  * @n: index number
  *
  * Return: the address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp_node, *traverse;
	unsigned int count = 1;

	if (head)
	{
		temp_node = malloc(sizeof(listint_t));
		if (temp_node == NULL)
			return (NULL);

		temp_node->n = n;
		if (idx > 0)
		{
			traverse = *head;
			while (traverse)
			{
				if (count == idx)
				{
					temp_node->next = traverse->next;
					traverse->next = temp_node;
					return (temp_node);
				}
				traverse = traverse->next;
				count++;
			}
			if (idx > count)
				return (NULL);
		}
		else
		{
			temp_node->next = *head;
			*head = temp_node;
		}
		return (temp_node);
	}
	return (NULL);
}
