#include "main.h"

/**
 * _atoi - converts a given string to integer,
 * @s: pointer string parameter to be converted
 * Return: int
 */

int _atoi(char *s)
{
	int i, j;
	unsigned int result;
	int sign = 1;
	char ch;

	i = 0;
	result = 0;
	while (*(s + i) != '\0')
	{
		ch = *(s + i);
		if (ch == '-')
		{
			sign *= -1;
		}
		if (ch >= '0' && ch <= '9')
		{
			j = i;
			while (*(s + j) > 47 && *(s + j) < 58)
			{
				result = (result * 10) + *(s + j) - '0';
				j++;
			}
			break;
		}
		i++;
	}
	if (sign < 0)
		result *= sign;

	return (result);
}
