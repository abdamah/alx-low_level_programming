#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: the binary number in string format
 *
 * Return: the converted number, or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int base = 1;
	int i = 0;

	if (!b)
		return (0);

	while (*(b + i))
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
		i++;
	}
	for (i--; i >= 0; i--)
	{
		if (*(b + i) == '1')
			result += base;
		base = base * 2;
	}

	return (result);
}
