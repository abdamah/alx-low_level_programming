#include "main.h"

/**
 * print_square - prints square using '#' of a given size
 *@size: size of square
 *
 * Return: void
 */
void print_square(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			int count = 0;

			while (count < size)
			{
				_putchar(35); /**ASCII code '#' is '35'*/
				count++;
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
