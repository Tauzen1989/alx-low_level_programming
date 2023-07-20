#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings
 * @separator:  string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i < (n - 1))
			printf("%s", separator);
	}
		va_end(args);

		printf("\n");
}
