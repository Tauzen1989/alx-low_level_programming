#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer.
 * @size: the number of elelments in an array
 * @array: input array to be checked
 * @cmp: a pointer  to the function to be used to compare values
 * Return: the index of the first element for which the
 * cmp function does not return 0
 * or -1 If no element matches & size is less or equal to zero
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);
	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]) != 0)
			return (n);
	}

	return (-1);
}
