#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function
 * @ac: int value
 * @av: array with two pointers
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int j, m, res = 0, d = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (m = 0; av[j][m]; m++)
			d++;
	}
	d += ac;

	mystr = malloc(sizeof(char) * d + 1);
	if (mystr == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (m = 0; av[j][m]; m++)
	{
		mystr[res] = av[j][m];
		res++;
	}
	if (mystr[res] == '\0')
	{
		mystr[res++] = '\n';
	}
	}
	return (mystr);
}

