#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum values
 * @max: maximum values
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, range;
	int *p;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	p = malloc(sizeof(int) * range);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
