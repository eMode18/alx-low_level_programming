#include "lists.h"

/**
 * add_nodeint_end - append node to list end
 * @head: pointer to first list item
 * @n: data to include in new item
 *
 * Return: new node pointer, else NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *append;
	listint_t *store = *head;

	append = malloc(sizeof(listint_t));
	if (!append)
		return (NULL);

	append->n = n;
	append->next = NULL;

	if (*head == NULL)
	{
		*head = append;
		return (append);
	}

	while (store->next)
		store = store->next;

	store->next = append;

	return (append);
}

