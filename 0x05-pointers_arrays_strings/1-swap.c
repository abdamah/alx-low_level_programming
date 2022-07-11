#include "main.h"

/**
 * swap_int - waps the values of two integers.
 *
 *@a: pointer parameter 1
 *@b: pointer parameter 2
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
