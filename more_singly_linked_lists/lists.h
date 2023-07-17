#ifndef _LISTS_H
#define _LISTS_H
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

int _strlen(const char *s);
char *_strdup(char *str);
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_dnodeint(listint_t **head, const int n);
listint_t *add_dnodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
listint_t *get_dnodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_dnodeint_at_index(listint_t **h, unsigned int idx, int n);
listint_t *create_node(unsigned int n, void *next, void *prev);
int delete_dnodeint_at_index(listint_t **head, unsigned int index);
int delete_first_dnode(listint_t **head);






#endif
