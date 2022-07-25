#include "main.h"

/**
* str_concat - concatenates two given strings.
*@s1: first string
*@s2: second string
*
*Return: concatenated string or Null
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, index = 0,  len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ptr[index++] = s1[i];

	for (i = 0; s2[i]; i++)
		ptr[index++] = s2[i];

	return (ptr);
}
