#include "main.h"

/**
 * puts2 - prints every other character of a given string
 * @str: pointer parameter
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j = j + 2;
	}
	_putchar('\n');
}
