#include "main.h"

/**
*  _strcmp - compares two strings
*		returns zero if s1 == s2
*		returns negative number if s1 < s2
*		returns positive number if s1 > s2
*
*@s1: first parameter
*@s2: second parameter
*Return: int
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, result = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			result = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			result = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
		else
			i++;

	}
	return (result);
}
