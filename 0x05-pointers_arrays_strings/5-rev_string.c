#include "main.h"

/**
 * rev_string - prints given string in reverse order
 * @s: pointer parameter
 *
 * Return: void
 */

void rev_string(char *s)
{
	char *tmp = s;
	char ch[1000];
	short count = 0;

	while (*s != '\0')
	{
		ch[count] = *s;
		s++;
		count++;
	}
	count = 0;

	while (s > tmp)
	{
		s--;
		*s = ch[count];
		count++;
	}
}
