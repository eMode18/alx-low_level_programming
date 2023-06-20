#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - return string length
 * @d: string value
 * Return: string length
 */
int _strlen(char *d)
{
	int j;

	j = 0;

	while (d[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * *_strcpy - replicate string that src points to
 * string to include (\0)
 * to buffer that dest points to
 * @dest: buffer pointer
 * @src: original string
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int lenght, j;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (j = 0; j < length; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}


/**
 * new_dog - new dog
 * @name: dog name
 * @age: dog's age
 * @owner: the dog's owner
 * Return: new dog pointer if successful, Null if not
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

