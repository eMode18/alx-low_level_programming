#include "lists.h"

/**
 * sum_dlistint - return sum of list items
 *
 * @head: list head
 * Return: items sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}