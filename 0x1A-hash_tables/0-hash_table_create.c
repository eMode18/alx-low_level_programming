#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table.
 * @size: array size.
 *
 * Return: on err - NULL.
 *         else - new hash table pointer.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int man;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (man = 0; man < size; man++)
		ht->array[man] = NULL;

	return (ht);
}
