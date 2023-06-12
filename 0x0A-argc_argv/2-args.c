#include <stdio.h>
#include "main.h"

/**
 * main - prints program arguments
 * @argc: size of argv
 * @argv: array of size argc
 * Return: 0 when successful
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}

	return (0);
}

