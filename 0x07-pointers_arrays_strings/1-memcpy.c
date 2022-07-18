#include "main.h"
/**
*_memcpy - copies n bytes from src memory area  to dest memory area
*@dest: dest parameter
*@src: src parameter
*@n: number of bytes to be copied
*Return: char *
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
