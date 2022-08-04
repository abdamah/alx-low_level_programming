#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 *
 * @separator: a pointer separator between numbers
 * @n: number of arg passed to the function (4)
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int index;

	va_start(valist, n);

	for (index = 0; index < n; index++)
	{
		/* print the numbers looped for va_arg */
		printf("%d", va_arg(valist, int));

		if (index != (n - 1) && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
