#include "main.h"
/**
 *_memcpy - copy memory block
 *@dest: copied to memory
 *@src: copied from memory
 *@n: # bytes
 *Return: copied memory with number of bytes altered
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int m = n;

	for (; k < m; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}

