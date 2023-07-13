#include "main.h"
#include <stdlib.h>

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

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: constitutes the number of elements in the array
 * @size: size of elements
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
