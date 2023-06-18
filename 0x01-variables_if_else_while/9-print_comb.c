#include <stdio.h>
/**
 * main - Entry point
 * discription: 'print all possible combinations of single-digit numbers'
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
		putchar('\n');

	return (0);
}
