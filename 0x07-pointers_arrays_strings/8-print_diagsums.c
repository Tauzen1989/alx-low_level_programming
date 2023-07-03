#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  a function that prints the sum of 
 * the two diagonals of a square matrix of integers.
 * @size: input value
 * @a: input value
 * Return: void
 */

void print_diagsums(int *a, int size)
{

	int diagsum1, diagsum2, i;

	diagsum1 = 0;
	diagsum2 = 0;

	for (i = 0; i < size; i++)
	{
		diagsum1 = diagsum1 + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		diagsum2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", diagsum1, diagsum2);
}
