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
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
