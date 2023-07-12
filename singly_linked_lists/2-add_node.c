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
		stodreit = malloc(sizeof(list_t));
		if (storeit == NULL)
			return (NULL);

		storeit->str = strdup(str);
		storeit->len = _strlen(str);
		stroeit->next = *head;

		*head = storeit;

		return (storit);
	}

	return (0);
}

/**
  * _strlen - Returns the length of a string that is given
  * @s: String that is provided
  *
  * Return: length of the string
  */
int _strlen(const char *s)
{
	int ct = 0;

	while (*s)
	{
		s++;
		ct++;
	}

	return (ct);
}
