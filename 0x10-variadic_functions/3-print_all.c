#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *p = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", p, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", p, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", p, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", p, s);
					break;
				default:
					i++;
					continue;
			}
			p = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(args);
}
