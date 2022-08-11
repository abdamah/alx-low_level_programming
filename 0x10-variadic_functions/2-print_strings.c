#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line
 *
 * @separator: a pointer separator between the strings
 * @n: the number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list valist;
	char *string;

	va_start(valist, n);

	for (index = 0; index < n; index++)
	{
		string = va_arg(valist, char*);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (index + 1 < n && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
