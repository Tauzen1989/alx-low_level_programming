#include "main.h"

/**
 * main -Entry point
 * Discription: 'Function that prints the sign of a number'
 * @n: The number to be checked
 *return: 1 if the number is positive, 0 if it is zero or -1 if it is negative
 */

int print_sign(int n)
{
	if (n < 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

