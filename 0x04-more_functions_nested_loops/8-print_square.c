#include "main.h"

/**
 * print_square - prints square using '#' of a given size
 *@size: size of square
 *
 * Return: void
 */
void print_square(int size)
{
	int i = 0, c;

	if (size > 0)
	{
		while (i < size)
		{
			c = 0;
			while (c < size)
			{
				_putchar(35); /**ASCII code of '#' is '35'*/
				c++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
