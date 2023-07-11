#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @height: number of rows in the array
 * @width: number of columns in the array
 * Return: a pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (; i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			a[i][j] = 0;

	return (a);
}
