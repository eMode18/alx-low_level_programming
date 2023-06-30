#include <stdlib.h>
#include "lists.h"

/**
 * free_list - func to free linked list
 * @head: list_t to free
 */
void free_list(list_t *head)
{
	list_t *state;

	while (head)
	{
		state = head->next;
		free(head->str);
		free(head);
		head = state;
	}
}

