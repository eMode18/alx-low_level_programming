#include <stdio.h>
#include "main.h"
/**
 * main - prints program name
 * @argc: size of argv
 * @argv: array of size argc
 * Return: if executed successfully, return 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

