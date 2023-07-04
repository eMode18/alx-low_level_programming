#include "lists.h"

/**
 * sum_listint - find the sum of listint_t list
 * @head: first list item
 *
 * Return: total
 */
int sum_listint(listint_t *head)
{
	int list_sum = 0;
	listint_t *store = head;

	while (store)
	{
		list_sum += store->n;
		store = store->next;
	}

	return (list_sum);
}

