#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at a given index
 * @head: pointer to the lists first node
 * @idx: insert psoition
 * @n: items to insert
 *
 * Return: pointer to resulting node, else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *result;
	listint_t *store = *head;

	result = malloc(sizeof(listint_t));
	if (!result || !head)
		return (NULL);

	result->n = n;
	result->next = NULL;

	if (idx == 0)
	{
		result->next = *head;
		*head = result;
		return (result);
	}

	for (i = 0; store && i < idx; i++)
	{
		if (i == idx - 1)
		{
			result->next = store->next;
			store->next = result;
			return (result);
		}
		else
			store = store->next;
	}

	return (NULL);
}

