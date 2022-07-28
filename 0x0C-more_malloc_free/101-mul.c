#include "main.h"

/**
 * len - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * create_xarray - Creates an array of chars and initializes it with
 *                 the character 'x'. Adds a terminating null byte.
 * @size: The size of the array to be initialized.
 *
 * Description: If there is insufficient space, the
 *              function exits with a status of 98.
 * Return: A pointer to the array.
 */
char *create_xarray(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (index = 0; index < (size - 1); index++)
		array[index] = 'x';

	array[index] = '\0';

	return (array);
}

/**
 * iterate_zeroes - Iterates through a string of numbers containing
 *                  leading zeroes until it hits a non-zero number.
 * @str: The string of numbers to be iterate through.
 *
 * Return: A pointer to the next non-zero element.
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * get_digit - Converts a digit character to a corresponding int.
 * @c: The character to be converted.
 *
 * Description: If c is a non-digit, the function
 *              exits with a status of 98.
 * Return: The converted int.
 */
int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * get_prod - Multiplies a string of numbers by a single digit.
 * @prod: The buffer to store the result.
 * @mult: The string of numbers.
 * @digit: The single digit.
 * @zeroes: The necessary number of leading zeroes.
 *
 * Description: If mult contains a non-digit, the function
 *              exits with a status value of 98.
 */
void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;

