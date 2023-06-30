#include <stdlib.h>
#include "lists.h"

/**
 * list_len - total items in the linked list
 * @h: pointer to list_t
 * Return: total items in h
 */
size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}
	return (p);
}

