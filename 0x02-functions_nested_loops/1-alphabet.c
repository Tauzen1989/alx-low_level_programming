#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 * Discription: 'prints the alphabet, in lowercase, followed by a new line.'
 * Return: void
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
	_putchar('\n);
}
