#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: integer parameter
 * Return: void
 */

void print_number(int n)
{
	unsigned int num;

	num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	if (n == 0)
	{
		_putchar(0);
	}
	else
	{

	_putchar((num % 10) + '0');
	}
}
