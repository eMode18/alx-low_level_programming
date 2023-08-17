#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node
 *
 * @head: list head
 * @index: new node idx
 * Return: 1 on success, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *idx_h1;
	dlistint_t *idx_h2;
	unsigned int k;

	idx_h1 = *head;

	if (idx_h1 != NULL)
		while (idx_h1->prev != NULL)
			idx_h1 = idx_h1->prev;

	k = 0;

	while (idx_h1 != NULL)
	{
		if (k == index)
		{
			if (k == 0)
			{
				*head = idx_h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				idx_h2->next = idx_h1->next;

				if (idx_h1->next != NULL)
					idx_h1->next->prev =idx_h2;
			}

			free(idx_h1);
			return (1);
		}
		idx_h2 = idx_h1;
		idx_h1 = idx_h1->next;
		k++;
	}

	return (-1);
}

