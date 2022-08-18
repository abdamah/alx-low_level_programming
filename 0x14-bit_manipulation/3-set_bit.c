#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/*left-shift operator multiply by 2^by index and using XOR operator*/
	*n ^= (1 << index);

	return (1);
}
