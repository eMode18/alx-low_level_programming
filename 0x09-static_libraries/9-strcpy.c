#include "main.h"

/**
 * char *_strcpy - copy string that str points to
 * @dest: copy destination
 * @src: source to copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;
	int n = 0;

	while (*(src + k) != '\0')
	{
		k++;
	}
	for ( ; n < k ; n++)
	{
		dest[n] = src[n];
	}
	dest[k] = '\0';
	return (dest);
}

