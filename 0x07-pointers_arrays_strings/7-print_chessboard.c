#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: input string
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int n;
	int m;

	for (n = 0; n < 8; n++)
	{
		for (m = 0; m < 8; m++)
			_putchar(a[n][m]);
		_putchar('\n');
	}
}
