#include "main.h"

/**
*string_toupper - converts a given string to upper case.
*@str: parameter
*Return: char *
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i++])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}

	return (str);
}
