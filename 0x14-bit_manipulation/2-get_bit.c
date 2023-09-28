#include "main.h"

/**
 * get_bit - this function returns the value of a bit at a given index.
 * @n: input unsigned long int
 * @index: index in which the value will be retrieved
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
		mask = 1;
		mask <<= index;

	if ((n & mask) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
