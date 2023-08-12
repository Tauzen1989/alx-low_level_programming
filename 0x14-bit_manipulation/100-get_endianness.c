#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num = 0x01020304;

	unsigned char *c = (unsigned char *) &num;
	if (*c == 0x01)
	{
		return (0);
	}
	else 
	{
		return (1);
	}
}
