#include "main.h"

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i)
	{
		s--;
		_putchar(*s);
		i--;
	}

	_putchar('\n');
}
