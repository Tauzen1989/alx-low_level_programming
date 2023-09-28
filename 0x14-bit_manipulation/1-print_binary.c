#include "main.h"

/**
 * print_binary - this function prints the binary representation of a number.
 * @n: input unsigned integer
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int bit_Count, i;
	unsigned long int mask;
       
	bit_Count = sizeof(unsigned long int) * 8;
	for (i = bit_Count - 1; i >= 0; i--)
	{
		mask = 1UL << i;
		_putchar((n & mask) ? '1' : '0');
	}

	_putchar('\n');
}
