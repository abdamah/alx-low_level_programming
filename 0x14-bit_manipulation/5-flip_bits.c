#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: the number
 * @m: the number to compare
 * Return: the number of different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;

	n = n ^ m;

	while (n)
	{
		i += n & 1; /* AND operator returns 1 if both bits are 1.*/
		n >>= 1; /*right-shift operator dividing 2^1 by a given number.*/
	}
	return (i);
}
