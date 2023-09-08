#include "hash_tables.h"

/**
 * hash_table_print - function to print a hash table.
 * @ht: pointer to ht.
 *
 * Description: Print Key/value pairs in the hash
 *              table sequentially.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *point;
	unsigned long int n;
	unsigned char break_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (n = 0; n < ht->size; n++)
	{
		if (ht->array[n] != NULL)
		{
			if (break_flag == 1)
				printf(", ");

			point = ht->array[n];
			while (point != NULL)
			{
				printf("'%s': '%s'", point->key, point->value);
				point = point->next;
				if (point != NULL)
					printf(", ");
			}
			break_flag = 1;
		}
	}
	printf("}\n");
}
