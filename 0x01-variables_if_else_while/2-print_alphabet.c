#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}
