#include "main.h"
/**
 * puts_half - this function prints 50% of the string
 * if odd len, n = (length_of_the_string - 1) * 0.5
 * @str - input
 * Return: 50% of the input
 */
void puts_half(char *str)
{
	int a, n, longInt;
	
	longInt = 0;

	for (a = 0; str[a] != '\0'; a++)
		longInt++;
	n = (longInt / 2);

	if ((longInt % 2) == 1)
		n = ((longInt + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putcahr(str[a]);

	_putchar('\n');
}
