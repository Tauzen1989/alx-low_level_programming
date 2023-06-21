#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 *
 * @n: Input number as an integer
 *
 * return: the value of the last digit
 */

int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
	{
		_putchar(-d + 48);
		return (-d);
	}
	else
	{
		_putchar(d + 48);
		return (d);
	}
}
