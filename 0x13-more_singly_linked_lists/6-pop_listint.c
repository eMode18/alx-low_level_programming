#include "lists.h"

/**
 * pop_listint - delete linked list's head node
 * @head: pointer to linked lists first item
 *
 * Return: data from deleted items, 0 for empty list
 */

int pop_listint(listint_t **head)
{
	listint_t *store;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	store = (*head)->next;
	free(*head);
	*head = store;

	return (num);
}

