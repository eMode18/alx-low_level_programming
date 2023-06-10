#include "main.h"
/**
 * _strcat - function to concatenate two strings 
 * @dest: input 
 * @src: input 
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int n;
	int m;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		dest[n] = src[m];
		n++;
		m++;
	}

	dest[n] = '\0';
	return (dest);
}

