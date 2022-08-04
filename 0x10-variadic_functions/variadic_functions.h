#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
*struct printers - a new type of print_all
*@arguments: passed arguments
*@print: pointer function
*/
typedef struct printers
{
	/* pointer to the arguments passed to the function print_all) */
	char *arguments;

	/* pointer to function print_all that returns nothing */
	void (*print)(va_list);
} printers_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

#endif
