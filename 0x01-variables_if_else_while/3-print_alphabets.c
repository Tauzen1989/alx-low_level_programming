#include <stdio.h>
/**
 * main - Entry point
 * Discription: 'print alphabet in lowercase and then in uppercase'
 * Return: always 0 (success)
 */
int main(void)
{
	int i = 97;
	int j = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	return (0);
}
