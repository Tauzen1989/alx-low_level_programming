#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers passed as arguments
 * @separator:  a string to be printed between numbers
 * @n: number of arguments passed to the functions
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < (n - 1))
			printf("%s", separator);
	}
		va_end(args);

		printf("\n");
}
