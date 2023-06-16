#include <stdlib.h>
#include "main.h"

/**
 * *_memset - populate mem with constant byte value
 * @s: populated mem area
 * @b: char value
 * @n: nummber of times char b is copied
 * Return: mem area s pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}

/**
 * *_calloc - array memory allocation
 * @nmemb: array length
 * @size: element size
 * Return: memory pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *membloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	membloc = malloc(size * nmemb);

	if (membloc == NULL)
		return (NULL);

	_memset(membloc, 0, nmemb * size);

	return (membloc);
}

