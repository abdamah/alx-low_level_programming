#include "main.h"
/**
*_memset - fills constant byte
*@s: source pointer
*@b: constant byte
*@n: number of bytes
*Return: char *
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
		s[n-- - 1] = b;

	return (s);

}
