#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: string to be measured
 * Return: l
 */

int _strlen_recursion(char *s)
{
	int n;

	if (*s != '\0')
	
	n = ( 1 +  _strlen_recursion(s + 1));

	return (n);
}
