#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @src: the source memory
 * @dest: destination memory
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	int m;
	int i = n;

	for (m = 0; m  < i; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
