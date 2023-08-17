#include "lists.h"

/**
 * get_dnodeint_at_index - return specified node item
 * @head: head pointer
 * @index: node index to search
 * Return: null or specified node idx
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len = 0;
	dlistint_t *hold;

	if (head == NULL)
	return (NULL);

	hold = head;
	while (hold)
	{
	if (index == len)
	return (hold);
	len++;
	hold = hold->next;
	}
	return (NULL);
}

