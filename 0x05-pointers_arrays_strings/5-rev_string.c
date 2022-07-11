#include "main.h"

/**
 * rev_string - prints given string in reverse order
 * @s: pointer parameter
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	while (len > 0)
	{
		s--;
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
