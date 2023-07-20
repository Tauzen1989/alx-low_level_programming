#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguments passed to the function
 *
 * Return: 0 - if n == 0,
 * or sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(args, int);

	va_end(args);

	return (sum);
}
