#include "main.h"

/**
 * strcat - concatenates the string pointed to by @src
 *         including the terminant null byte, to the end of the string
 *         pointed to by @dest.
 * @dest: pointer to the string to be concatenated
 * @src: source string that gets appended to @dest
 * Return: pointer to the destination string @dest
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
