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

		storeit->str = _strdup(str);
		Storeit->len = _strlen(str);
		storeit->next = *head;

		*head = storeit;

		return (storeit);
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

/**
 * _strdup - put pointer at new memory
 * @str: The string to be copied.
 * Return: if not enought mem avail and If str == NULL.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
	{	return (NULL);
	}

	for (index = 0; str[index]; index++)
	{	len++;
	}

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
	{	return (NULL);
	}

	for (index = 0; str[index]; index++)
	{	duplicate[index] = str[index];
	}

	duplicate[len] = '\0';
		return (duplicate);
}
