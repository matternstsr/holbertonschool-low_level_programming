#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a the position that is chosen
 * @h: pointer to head of DLL
 * @idx: index to look for with in the DLL
 * @n: number value placed in to the node that we are adding
 *
 * Return: address to new node or NULL if not possible to insert
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *made_node, *notend = *h, *tmpnode1 = *h, *tmpnode2;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	while (notend)
		notend = notend->next, count++;
	if (idx > count)
                return (NULL);
	made_node = malloc(sizeof(dlistint_t));
	if (!made_node)
                return (NULL);
	made_node->n = n;
	if (idx == 0)
	{
		made_node->prev = NULL, made_node->next = *h;
		if (*h)
			(*h)->prev = made_node;
		*h = made_node;
		return (made_node);
	}
	for (count = 0; count < idx; count++)
		tmpnode2 = tmpnode1, tmpnode1 = tmpnode1->next;

	made_node->next = tmpnode1;
	made_node->prev = tmpnode2;
	tmpnode2->next = made_node;
	if (tmpnode1)
		tmpnode1->prev = made_node;
	return (made_node);
}
