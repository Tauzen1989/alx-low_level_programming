#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to the input string
 *
 * Return: the converted number, or
 * 0 if there is one or more chars in the string b that is not 0 or 1
 * or null if string is empty
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0, pow = 1;
	int len;

	if (b == NULL)
		return (0);
	len = 0;
	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		len++;
	}
	len--;
	while (len >= 0)
	{
		if (b[len] == '1')
		{
			dec_val += pow;
		}
		pow *= 2;
		len--;
	}

	return (dec_val);
}
