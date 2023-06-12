#include <stdio.h>
#include "main.h"

/**
 * main - print number or arguments
 * @argc: size of argv
 * @argv: array of size argc
 * Return: return 0 on success
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}

