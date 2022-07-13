#include "main.h"
/**
*  _strncpy - copies a given string to destination
*@dest: destination parameter
*@src: source parameter
*@n: number of bytes to be copied
*Return: char *
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
