#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - this function that converts
 * a binary number to an unsigned int.
 * @b: input string
 *
 * Return: the converted number,
 * 0 - there is one or more chars in the string b that is not 0 or 1
 * 0 - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (b == NULL)
		return (0);
	result = 0;
	while (*b)
	{
		if (*b == '0')
		{
			result = result * 2 + 0;
		}
		else if (*b == '1')
		{
			result = result * 2 + 1;
		}
		else
		{
			return (0);
		}
		b++;
	}

	return (result);
}
