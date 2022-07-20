#include "main.h"
/**
* _strlen_recursion - gets length of a string
* @s: given string parameter
*Return: int
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
