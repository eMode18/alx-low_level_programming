#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the lowest obtainable change from a
 * certain amount of money
 * @argc: arguments
 * @argv: array of size argc
 * Return: 0 when successfully executed,on error return 1
 */
int main(int argc, char *argv[])
{
	int digit, i, outcome;
	int change[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	digit = atoi(argv[1]);
	outcome = 0;

	if (digit < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && digit >= 0; i++)
	{
		while (digit >= change[i])
		{
			outcome++;
			digit -= change[i];
		}
	}

	printf("%d\n", outcome);
	return (0);
}

