#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at specified index
 * @head: pointer to lists first item
 * @index: position to delete from
 *
 * Return: 1 on success, else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *store = *head;
	listint_t *item = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(store);
		return (1);
	}

	while (i < index - 1)
	{
		if (!store || !(store->next))
			return (-1);
		store = store->next;
		i++;
	}


	item = store->next;
	store->next = item->next;
	free(item);

	return (1);
}

