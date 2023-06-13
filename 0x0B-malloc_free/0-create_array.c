#include "main.h"
#include <stdlib.h>
/**
 * create_array - function to create an array
 * @size: array size
 * @c: char input value
 * Description: create array of size = size and
 * Return: array pointer, on error, return Null.
 *
 */
char *create_array(unsigned int size, char c)
{
	char *mystr;
	unsigned int j;

	mystr = malloc(sizeof(char) * size);
	if (size == 0 || mystr == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		mystr[j] = c;
	return (mystr);
}

