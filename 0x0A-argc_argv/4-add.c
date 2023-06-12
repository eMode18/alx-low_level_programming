#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check for a digit in a string
 * @str: string array
 * Return: 0 when executed successfully
 */
int check_num(char *str)
{
	unsigned int digits;

	digits = 0;
	while (digits < strlen(str))

	{
		if (!isdigit(str[digits]))
		{
			return (0);
		}

		digits++;
	}
	return (1);
}

/**
 * main - Print program name
 * @argc: digis arguments
 * @argv: number of arguements
 * Return: 0 when successfully executed
 */

int main(int argc, char *argv[])

{
	int digits;
	int convert_to_int;
	int total = 0;

	digits = 1;
	while (digits < argc)
	{
		if (check_num(argv[digits]))

		{
			convert_to_int = atoi(argv[digits]);
			total += convert_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		digits++;
	}

	printf("%d\n", total);

	return (0);
}

