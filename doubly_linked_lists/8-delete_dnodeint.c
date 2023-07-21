#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at position of index
 * @head: DLL
 * @index: Position to delete in the DLL
 * Return: 1 at success, -1 at failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete;
	dlistint_t *temp;
	unsigned int i;

	delete = *head;

	if (delete != NULL)
		while (delete->prev != NULL)
			delete = delete->prev;

	i = 0;

	while (delete != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = delete->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				temp->next = delete->next;

				if (delete->next != NULL)
					temp->next->prev = temp;
			}

			free(delete);
			return (1);
		}
		temp = delete;
		delete = delete->next;
		i++;
												}

	return (-1);
}
