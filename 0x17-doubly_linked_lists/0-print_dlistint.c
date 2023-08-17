#include "lists.h"

/**
 * print_dlistint - prints dlistint_t contents
 *
 * @h: list head
 * Return: total nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int tally = 0;

	if (h == NULL)
		return (tally);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		tally++;
		h = h->next;
	}

	return (tally);
}

