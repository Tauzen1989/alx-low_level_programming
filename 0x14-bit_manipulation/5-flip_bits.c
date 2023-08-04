#include "main.h"

/**
 * flip_bits - computes the number of bits you would need to flip
 * to get from one number to another.
 * @n: input number
 * @m: input number to convert to
 *
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, count;

	x = n ^ m;
	count = 0;

	while (x > 0)
	{
		count += (x & 1);
		x >>= 1;
	}

	return (count);
}
