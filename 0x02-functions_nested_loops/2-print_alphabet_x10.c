#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet
 * return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
