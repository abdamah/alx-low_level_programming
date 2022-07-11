#include "main.h"

/**
 * _strlen - returns the length of a given string.
 *
 * @s: pointer parameter
 * Return: int
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len += 1;

	return (len);
}
