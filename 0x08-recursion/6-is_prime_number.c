#include "main.h"
/**
* is_prime_number - returns true if the number is prime
*@n: number parameter
*
*Return: int
*/
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);

	return (is_prime(n, start));
}

/**
* is_prime - checks whether a given number is a prime number or not
* @n: number parameter
* @start: initial point
*
* Return: 1 if n is prime, 0 otherwise
*/

int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);

	return (is_prime(n, start - 1));
}
