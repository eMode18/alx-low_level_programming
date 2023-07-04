#include "lists.h"

/**
 * get_nodeint_at_index - function to return node at a
 * certain postion within the linked list
 * @head: first item of linked list
 * @index: position of returned node
 *
 * Return: node pointer, else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *store = head;

	while (store && i < index)
	{
		store = store->next;
		i++;
	}

	return (store ? store : NULL);
}

