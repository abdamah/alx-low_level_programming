#include "variadic_functions.h"
/**
 * print_all - prints anything
 *
 * @format: fotmat of printers (ceis)
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	/* Create struct type of printers */
	printers arraychars[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	int index1 = 0;
	int index2 = 0;
	char *commaspace = "";
	va_list charlist;

	/*Initial charlist pointer*/
	va_start(charlist, format);

	while (format && format[index1] != '\0')
	{
		index2 = 0;
		while (index2 < 4)
		{
			/* dereferenced to the pointer arguments */
			if (format[index1] == *arraychars[index2].arguments)
			{
				printf("%s", commaspace);
				arraychars[index2].print(charlist);
				commaspace = ", ";
				break;
			}
			index2++;
		}
		index1++;
	}
	printf("\n");
	va_end(charlist);
}

/**
 * print_char - prints a char
 *
 * @charlist: va_list that iterates through the args
 *
 * Return: void
 */
void print_char(va_list charlist)
{
	printf("%c", va_arg(charlist, int));
}

/**
 * print_integer - prints an integer
 *
 * @charlist: va_list that iterates through the args
 *
 * Return:void
 */
void print_integer(va_list charlist)
{
	printf("%d", va_arg(charlist, int));
}

/**
 * print_float - prints a float
 *
 * @charlist: va_list that iterates through the args
 *
 * Return: void
 */
void print_float(va_list charlist)
{
	printf("%f", va_arg(charlist, double));
}

/**
 * print_string - prints a string
 *
 * @charlist: va_list that iterates through the args
 *
 * Return: void
 */
void print_string(va_list charlist)
{
	char *str;

	/* de-reference str to the arg passed to the function */
	str = va_arg(charlist, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}
