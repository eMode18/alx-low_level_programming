#include "lists.h"

/**
 * add_nodeint - append new node to link list start
 * @head: pointer to the list first node
 * @n: data to iclude in new node
 *
 * Return: new node's pointer, else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *append;

	append = malloc(sizeof(listint_t));
	if (!append)
		return (NULL);

	append->n = n;
	append->next = *head;
	*head = append;

	return (append);
}

