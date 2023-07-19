#include "lists.h"

/**
 * sum_dlistint - Returns he sumod all the data in a DLL
 * @head: The DLL
 * Return: sum of all data in the DLL
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
