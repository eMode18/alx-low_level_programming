#include "lists.h"

/**
 * free_listint2 - function to free a linked list
 * @head: pointer to the list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *store;

	if (head == NULL)
		return;

	while (*head)
	{
		store = (*head)->next;
		free(*head);
		*head = store;
	}

	*head = NULL;
}

