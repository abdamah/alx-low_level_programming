#include "main.h"
/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: the number
 * @index: the position to set the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	/*left-shift operator by multiplying 2^index and AND(&) operator*/
	*n &= ~(1 << index);
	return (1);
}
