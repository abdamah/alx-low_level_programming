#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the decimal
 *
 * Return: return void
 */
void print_binary(unsigned long int n)
{
	int flag = 0;
	unsigned long int bitmask = 1;

	bitmask <<= 63;
	if (n == 0)
		_putchar('0');

	while (bitmask > 0)
	{
		if ((n & bitmask) == 0 && flag == 1)
			_putchar('0');
		if ((n & bitmask) != 0)
		{
			_putchar('1');
			flag = 1;
		}

		bitmask = bitmask >> 1; /*right-shift operator*/
	}
}
