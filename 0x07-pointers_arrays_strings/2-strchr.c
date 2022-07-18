#include "main.h"
/**
*_strchr - Returns a pointer to the first occurrence
*of the character c in the string s, or NULL if the
*character is not found
*
*@s: target parameter
*@c: character parameter
*
*Return: char *
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'  ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
