#include <stdlib.h>
#include <string.h>
#include "the_lists.h"

/**
 * add_node_end - append new node at the end of a linked list
 * @head: list_t list double pointer
 * @str: string to append
 * Return: address to new item, else return NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *append;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	append = malloc(sizeof(list_t));
	if (!append)
		return (NULL);

	append->str = strdup(str);
	append->length = length;
	append->next = NULL;

	if (*head == NULL)
	{
		*head = append;
		return (append);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = append;

	return (append);
}

