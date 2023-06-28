#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * it will use at most n bytes from src;
 * and src does not need to be null-terminated
 * if it contains n or more bytes
 * @dest: destination string
 * @src: source string
 * @n: input value
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int k = 0, j = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	while (j < n && src[j] != '\0')
	{

	dest[k] = src[j];
		k++;
		j++;
	}

	dest[k] = '\0';

	return (dest);
}
