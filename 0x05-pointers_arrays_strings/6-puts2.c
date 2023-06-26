#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character,
 * followed by a new line
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i = 0, m = 0;
	char *k = str;
	int n;

	while (*k != '\0')
	{
		k++;
		i++;
	}
	m = i - 1;
	for (n = 0 ; n <= m ; n++)
	{
		if (n % 2 == 0)
	{
		_putchar(str[n]);
	}
	}
	_putchar('\n');
}
