#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @b: the desired value
 * @s: starting address of memory to be filled
 * @n: number of bytes to be changed
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
