#include "main.h"
/**
 * print_number - prints an integer number using _putchar
 * @n: number to print
 *
 * Return: void
 */

void print_number(int n)
{

	int d = 1, i = 0, j = 0;

	if (i == 0)
		_putchar('0' + n);
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}

	while (n / d != 0)
	{
		d *= 10;
		i++;
	}
	d = d / 10;

	while (j < i)
	{
		_putchar('0' + n / d);
		n = n - (n / d) * d;
		d = d / 10;
		j++;
	}
}
