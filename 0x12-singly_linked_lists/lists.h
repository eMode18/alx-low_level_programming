#ifndef THE_LISTS_H
#define THE_LISTS_H

/**
 * struct list_s - list:
 * @str: string -string
 * @len: string length
 * @next: pointer to next node
 * Description: node structure for the singly linked list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
