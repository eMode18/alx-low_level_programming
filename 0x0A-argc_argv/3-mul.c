#include <stdio.h>
#include "main.h"

/**
 * _atoi - performs a conversion from string to int
 * @s: string input
 * Return: converted int value
 */
int _atoi(char *s)
{
	int j, v, n, length, x, number;

	j = 0;
	v = 0;
	n = 0;
	length = 0;
	x = 0;
	number = 0;

	while (s[length] != '\0')
		length++;

	while (j < length && x == 0)
	{
		if (s[j] == '-')
			++v;

		if (s[j] >= '0' && s[j] <= '9')
		{
			number = s[j] - '0';
			if (v % 2)
				number = -number;
			n = n * 10 + number;
			x = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			x = 0;
		}
		j++;
	}

	if (x == 0)
		return (0);

	return (n);
}

/**
 * main - perform the multiplication of two digits
 * @argc: arguements
 * @argv: array of size argc
 * Return: 0 when executed successfully, and return 1 on error
 */
int main(int argc, char *argv[])
{
	int result, digit1, digit2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	digit1 = _atoi(argv[1]);
	digit2 = _atoi(argv[2]);
	result = digit1 * digit2;

	printf("%d\n", result);

	return (0);
}

