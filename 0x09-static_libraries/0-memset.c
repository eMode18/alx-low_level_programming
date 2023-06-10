#include "main.h"
/**
 * _memset - populate memory block with a particular value
 * @s: memory block starting address
 * @b: value
 * @n: # bytes to be altered
 * Return: altered array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

