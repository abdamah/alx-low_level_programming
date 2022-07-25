#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory.
*@str: string to be copied
*
*Return: allocated memory or Null.
*/

char *_strdup(char *str)
{
	char *ptr;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		ptr[index] = str[index];
	}

	ptr[len] = '\0';

	return (ptr);

}
