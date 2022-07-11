#include <stdio.h>

/**
 * print_array - prints n elements of a given array
 * @a: int pointer parameter
 * @n: number of elements to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
		i++;
	}

	printf("\n");
}
