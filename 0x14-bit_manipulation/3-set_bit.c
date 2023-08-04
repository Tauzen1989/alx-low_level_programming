#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to an unsigned long integer
 * @index: index of the bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int val;

	if (index > (sizeof(n) * 8 - 1))
		return (-1);
	val = 1 << index;
	*n = *n | val;

	return (1);
}

