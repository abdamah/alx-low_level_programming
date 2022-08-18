#include "main.h"
/**
 * get_bit - return one bit
 * @n: the number
 * @index: the position to read the bit
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);

	bit = n >> index; /*right-shift operation by 2^index*/

	return (bit & 0x1);
}
