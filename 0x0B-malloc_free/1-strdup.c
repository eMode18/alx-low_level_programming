#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copy to new memory block
 * @str: char input
 * Return: 0 on success
 */
char *_strdup(char *str)
{
	char *avalue;
	int k, p = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;

	avalue = malloc(sizeof(char) * (k + 1));

	if (avalue == NULL)
		return (NULL);

	for (p = 0; str[p]; p++)
		avalue[p] = str[p];

	return (avalue);
}

