#include <stdio.h>
/**
 * main - Entry point
 * Disciption: 'print alphabet in lowercase, except q and e'
 * Return: always 0 (success)
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if  (i == 101 || i == 113)
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}
		putchar('\n');

	return (0);
}
