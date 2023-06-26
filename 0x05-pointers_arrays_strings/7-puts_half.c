#include "main.h"
/**
 * puts_half - a function that prints half of a string,
 * followed by a new line.
 * If the number of characters is odd,
 * the function should print the last n characters of the string,
 * n = (length_of_the_string - 1) / 2
 * @str: input string
 * Return: void
 */
void puts_half(char *str)
{
	int d, n;
	int i = 0;

	for (d = 0; str[d] != '\0'; d++)
		i++;

	n = (i / 2);

	if (i % 2 == 1)
		n = ((i + 1) / 2);

	for (d = n; str[d] != '\0'; d++)
		_putchar(str[d]);
	_putchar('\n');
}
