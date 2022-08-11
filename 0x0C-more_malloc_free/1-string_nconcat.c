#include "main.h"

/**
*string_nconcat - stringsenates two given strings
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes of s2 to stringsenate to s1.
*
*Return: char * or NULL if fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strings;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	strings = malloc(sizeof(char) * (len + 1));

	if (strings == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		strings[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		strings[len++] = s2[index];

	strings[len] = '\0';

	return (strings);
}
