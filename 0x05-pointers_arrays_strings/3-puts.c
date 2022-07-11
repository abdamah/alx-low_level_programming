#include "main.h"

/**
 * _puts - print a given string to stdout
 *
 * @str: pionter parameter
 * Return: void
 */
void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
