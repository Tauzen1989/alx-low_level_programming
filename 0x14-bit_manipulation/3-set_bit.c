#include "main.h"

/**
 * set_bit - this function sets the value of a bit to 1 at a given index.
 * @n: binary string of an unsigned integer
 * @index: index in which the value will be set to 1
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int one;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	one = 1;
	*n |= (one << index);

	return (1);
}
