#include "main.h"

/**
* factorial - find factorial of a given number
* @n: the number to be found
*
* Return: int
*/

int factorial(int n)
{

	if (n < 0)
		return (-1);
	else if  (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
