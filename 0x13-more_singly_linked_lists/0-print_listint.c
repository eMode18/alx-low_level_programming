#include "lists.h"

/**
 * print_listint - print every item in the linked list
 * @h: linked list to print, type listint_t
 *
 * Return: the total number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t sum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		sum++;
		h = h->next;
	}

	return (sum);
}

