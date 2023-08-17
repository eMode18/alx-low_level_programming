#include "lists.h"

/**
 * dlistint_len - return content of linked list
 *
 * @h: list head
 * Return: total nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int sum = 0;

	if (h == NULL)
		return (sum);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		sum++;
		h = h->next;
	}

	return (sum);
}

