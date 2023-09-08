#include "hash_tables.h"

/**
 * hash_table_get - get the value associated with
 *                  a specified key in the hash table.
 * @ht: hash table pointer.
 * @key: key.
 *
 * Return: key match failure - NULL.
 *         else - value associated with key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *point;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	point = ht->array[idx];
	while (point && strcmp(point->key, key) != 0)
		point = point->next;

	return ((point == NULL) ? NULL : point->value);
}
