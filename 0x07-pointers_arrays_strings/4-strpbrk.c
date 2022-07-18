#include "main.h"
/**
*_strpbrk - searches a string for any of a set of bytes
*
*@s: given string
*@accept: string where searched bytes are located
*
*Return: char *
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return (NULL);
}
