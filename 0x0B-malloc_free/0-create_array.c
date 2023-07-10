#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @c: char in which the array will be assigned to
 * @size: size of an array of chars
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	p = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)

		p[i] = c;

	return (p);
}
