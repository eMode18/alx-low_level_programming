#include "lists.h"

/**
 * listint_len - provide #items in linked list
 * @h: link to traverse, list type listint_t
 *
 * Return: nodes value
 */
size_t listint_len(const listint_t *h)
{
	size_t pos = 0;

	while (h)
	{
		pos++;
		h = h->next;
	}

	return (pos);
}

