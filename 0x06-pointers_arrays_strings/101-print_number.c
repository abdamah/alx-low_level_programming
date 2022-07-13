#include "main.h"
/**
* print_number - prints an integer
*@n:integer to be printed
*
*/
void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar(45); /**ASCII code '-; is '45'*/
		number = -number;
	}

	if ((number / 10) > 0)
		print_number(number / 10);

	_putchar((number % 10) + '0');
}
