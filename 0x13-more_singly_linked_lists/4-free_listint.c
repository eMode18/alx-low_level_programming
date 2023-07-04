#include "lists.h"

/**
 * free_listint - function to free list
 * @head: the listint_t list to free
 */
void free_listint(listint_t *head)
{
	listint_t *store;

	while (head)
	{
		store = head->next;
		free(head);
		head = store;
	}
}

