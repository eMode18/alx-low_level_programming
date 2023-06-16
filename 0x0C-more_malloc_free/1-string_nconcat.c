#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - joins n bytes of one string to another
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2 added to s1
 * Return: pointer to concatenated string value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *l;
	unsigned int k = 0, i = 0, dim1 = 0, dim2 = 0;

	while (s1 && s1[dim1])
		dim1++;
	while (s2 && s2[dim2])
		dim2++;

	if (n < dim2)
		l = malloc(sizeof(char) * (dim1 + n + 1));
	else
		l = malloc(sizeof(char) * (dim1 + dim2 + 1));

	if (!l)
		return (NULL);

	while (k < dim1)
	{
		s[k] = s1[k];
		k++;
	}

	while (n < dim2 && k < (dim1 + n))
		s[k++] = s2[i++];

	while (n >= dim2 && k < (dim1 + dim2))
		s[k++] = s2[i++];

	s[k] = '\0';

	return (l);
}

