#include "main.h"
#include <stdlib.h>
/**
 * str_concat - join inputs
 * @s1: input 1
 * @s2: second input
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *join;
	int k, ck;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	k = ck = 0;
	while (s1[k] != '\0')
		k++;
	while (s2[ck] != '\0')
		ck++;
	join = malloc(sizeof(char) * (k + ck + 1));

	if (join == NULL)
		return (NULL);
	k = ck = 0;
	while (s1[k] != '\0')
	{
		join[k] = s1[k];
		k++;
	}

	while (s2[ck] != '\0')
	{
		join[k] = s2[ck];
		k++, ck++;
	}
	join[k] = '\0';
	return (join);
}

