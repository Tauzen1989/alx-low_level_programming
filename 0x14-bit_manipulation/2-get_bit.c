#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: input value
 * @index:index of the bit
 *
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int get_val, val;

	if (index > (sizeof(n) * 8 - 1))
		return (-1);
	get_val = n >> index;
	val = get_val & 1;

	return (val);
}
