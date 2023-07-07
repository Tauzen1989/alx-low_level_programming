#include "main.h"
/**
 * _strlen - determines the length of a string
 * @s: string to be checked
 * Return: length of a string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}
