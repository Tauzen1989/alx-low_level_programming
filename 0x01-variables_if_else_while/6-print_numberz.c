#include <stdio.h>
/**
 * main - Entry point
 * Discription: 'print all digits of base 10'
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}
		putchar('\n');

	return (0);
}

