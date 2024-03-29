#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds node at the start of linked list
 * @head: list_t's double pointer
 * @str: string to concatenate to node
 * Return: address to new item, else return NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *append;
	unsigned int len = 0;

	while (str[len])
		len++;

	append = malloc(sizeof(list_t));
	if (!append)
		return (NULL);

	append->str = strdup(str);
	append->len = len;
	append->next = (*head);
	(*head) = append;

	return (*head);
}

