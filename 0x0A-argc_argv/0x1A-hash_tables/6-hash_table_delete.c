#include "hash_tables.h"

/**
 * hash_table_delete - function to delete ht.
 * @ht: ht pointer.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *start = ht;
	hash_node_t *point, *tmp;
	unsigned long int n;

	for (n= 0; n < ht->size; n++)
	{
		if (ht->array[n] != NULL)
		{
			point = ht->array[n];
			while (point != NULL)
			{
				tmp = point->next;
				free(point->key);
				free(point->value);
				free(point);
				point = tmp;
			}
		}
	}
	free(start->array);
	free(start);
}
