#include "lists.h"

/**
  * add_node - puts a node at the beginning of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *storeit;

	if (head != NULL && str != NULL)
	{
		storeit = malloc(sizeof(list_t));
		if (storeit == NULL)
			return (NULL);

		storeit->str = strdup(str);
		storeit->len = strlen(str);
		storeit->next = *head;

		*head = storeit;

		return (storeit);
	}

	return (0);
}
