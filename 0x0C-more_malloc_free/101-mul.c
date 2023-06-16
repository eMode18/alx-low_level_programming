#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - inspect string for non-digit char
 * @s: string
 * Return: if non-digit is present, return 0, else 1
 */
int is_digit(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] < '0' || s[j] > '9')
			return (0);
		j++;
	}
	return (1);
}

/**
 * _strlen - return string length
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}

/**
 * errors - safeguard aganist main errors
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiply two abs numbers
 * @argc: size of argv
 * @argv: array of size argc
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *l1, *l2;
	int size1, size2, size, j, carry, digt1, digt2, *result, b = 0;

	l1 = argv[1], l2 = argv[2];
	if (argc != 3 || !is_digit(l1) || !is_digit(l2))
		errors();
	size1 = _strlen(l1);
	size2 = _strlen(l2);
	size = size1 + size2 + 1;
	result = malloc(sizeof(int) * size);
	if (!result)
		return (1);
	for (j = 0; j <= size1 + size2; j++)
		result[j] = 0;
	for (size1 = size1 - 1; size1 >= 0; size1--)
	{
		digt1 = s1[size1] - '0';
		carry = 0;
		for (size2 = _strlen(l2) - 1; size2 >= 0; size2--)
		{
			digt2 = l2[size2] - '0';
			carry += result[size1 + size2 + 1] + (digt1 * digt2);
			result[size1 + size2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[size1 + size2 + 1] += carry;
	}
	for (j = 0; j < size - 1; j++)
	{
		if (result[j])
			b = 1;
		if (b)
			_putchar(result[j] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

