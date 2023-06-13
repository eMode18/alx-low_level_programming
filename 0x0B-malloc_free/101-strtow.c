#include <stdlib.h>
#include "main.h"

/**
 * word_track -function to count words in a string
 * @t: string input
 * Return: total words
 */
int word_track(char *t)
{
	int track, k, m;

	track = 0;
	m = 0;

	for (k = 0; t[k] != '\0'; k++)
	{
		if (t[k] == ' ')
			track = 0;
		else if (track == 0)
		{
			track = 1;
			m++;
		}
	}

	return (m);
}
/**
 * **strtow - divide string into two
 * @str: string
 * Return: a string pointer on success
 * return null on error
 */
char **strtow(char *str)
{
	char **mat, *tmp;
	int j, q = 0, length = 0, letters, k = 0, first, last;

	while (*(str + length))
		length++;
	letters = word_track(str);
	if (letters == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (letters + 1));
	if (mat == NULL)
		return (NULL);

	for (j = 0; j <= length; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (k)
			{
				last = j;
				tmp = (char *) malloc(sizeof(char) * (k + 1));
				if (tmp == NULL)
					return (NULL);
				while (first < last)
					*tmp++ = str[first++];
				*tmp = '\0';
				mat[q] = tmp - k;
				q++;
				k = 0;
			}
		}
		else if (k++ == 0)
			first = j;
	}

	mat[q] = NULL;

	return (mat);
}

