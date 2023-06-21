#include "main.h"

/**
 * main - Determines if the numer is greater, equal or less than zero
 *
 * @n: The input number as an integer
 *return: 1 if the number is positive, 0 if it is zero or -1 if it is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}

		_putchar('\n');
}

