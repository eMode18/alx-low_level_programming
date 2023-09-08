#include "hash_tables.h"

/**
 * key_index - get storage location of key-value
 *      pair within the array of a hash table.
 * @key: key index
 * @size: array size of the hash table.
 *
 * Return: key index
 * Description: implement the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
