#include "main.h"
/**
 * get_endianness - get the endiannes of the arch
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *ch = (char *)&i;

	if (*ch)
		return (1);

	return (0);
}
