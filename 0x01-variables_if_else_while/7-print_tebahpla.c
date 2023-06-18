#include <stdio.h>
/**
 * main - Entry point
 * Discription: 'print lowercase alphabet in reverse'
 * Return: always 0 (success)
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
		putchar('\n');

	return (0);
}
