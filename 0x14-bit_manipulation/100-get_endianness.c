#include "main.h"

/**
 * get_endianness - this function checks the endianness.
 *
 * Return: nothing
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *bytePtr;

	bytePtr = (unsigned char *)&num;
	if (*bytePtr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
