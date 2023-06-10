#include "main.h"
/**
 * _atoi - perform a conversion from string to int
 * @s: string
 * Return: int value.
 */

int _atoi(char *s)
{
	int state = 1, k = 0;
	unsigned int rState = 0;

	while (!(s[k] <= '9' && s[k] >= '0') && s[k] != '\0')
	{
		if (s[k] == '-')
			state *= -1;
		k++;
	}
	while (s[k] <= '9' && (s[k] >= '0' && s[k] != '\0'))
	{
		rState = (rState * 10) + (s[k] - '0');
		k++;
	}
	rState *= state;
	return (rState);
}

