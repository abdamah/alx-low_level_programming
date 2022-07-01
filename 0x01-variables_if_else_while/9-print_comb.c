#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d = 48;

	while (d < 58)
	{
		putchar(d);
		if (d != 57)
			putchar(',');

		putchar(' ');

		d += 1;
	}
	putchar('\n');

	return (0);
}
