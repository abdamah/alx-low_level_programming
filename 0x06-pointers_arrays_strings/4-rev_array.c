#include "main.h"

/**
*  reverse_array - reverse elements of a given array.
*  @a: array parameter
*  @n: number of elements
*/

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
