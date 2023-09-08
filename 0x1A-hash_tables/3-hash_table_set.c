#include "hash_tables.h"

/**
 * hash_table_set - Add or update key-value pair in a hash table.
 * @ht: hash table pointer.
 * @key: non empty string key to be added.
 * @value: The value pointed to by key.
 *
 * Return: err - 0.
 *         seccess - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *curr;
	char *v_cpy;
	unsigned long int idx, n;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	v_cpy = strdup(value);
	if (v_cpy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (n = idx; ht->array[n]; n++)
	{
		if (strcmp(ht->array[n]->key, key) == 0)
		{
			free(ht->array[n]->value);
			ht->array[n]->value = v_cpy;
			return (1);
		}
	}

	curr = malloc(sizeof(hash_node_t));
	if (curr == NULL)
	{
		free(v_cpy);
		return (0);
	}
	curr->key = strdup(key);
	if (curr->key == NULL)
	{
		free(curr);
		return (0);
	}
	curr->value = v_cpy;
	curr->next = ht->array[idx];
	ht->array[idx] = curr;

	return (1);
}
