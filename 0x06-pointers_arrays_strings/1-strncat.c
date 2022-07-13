#include "main.h"
/**
 *_strncat - concatenate two given strings
 *@dest: destination parameter
 *@src: source parameter
 *@n:integer number of bytes
 *Return: char *
 */

char *_strncat(char *dest, char *src, int n)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);

}
