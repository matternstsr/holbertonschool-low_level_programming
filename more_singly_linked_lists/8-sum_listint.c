#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - function that returns the sum of all the
  * data (n) of a listint_t linked list.
  * @head: end of the list
  *
  * Return: if the list is empty, return 0
  */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (head)
	{
		while (head)
		{
			total += head->n;
			head = head->next;
		}
	}

	return (total);
}
