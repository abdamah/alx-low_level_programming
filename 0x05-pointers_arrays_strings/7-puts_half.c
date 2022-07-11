#include "main.h"

/**
 * puts_half - prints the second half of a given string
 * @str: pointer parameter
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
		length++;

	if (length % 2 == 0)
		length /= 2;
	else
		length = length / 2 + 1;

	while (*(str + length) != '\0')
	{
		_putchar(*(str + length));
		length++;
	}
	_putchar('\n');
}
