#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 followed by a new line and replaces
 * Fizz, Buzz or FizzBuzz if the number is a multiple of 3, 5
 *
 * Return: 0
 */
int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 15 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", i);
		i++;
	}
	printf("\n");

	return (0);
}
