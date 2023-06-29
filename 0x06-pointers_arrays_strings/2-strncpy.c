#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: string to copy from
 * @src: string to copy to.
 * @n: index value
 * Return: function should work exactly like strncpy
 */

char *_strncpy(char *dest, char *src, int n)
{

	int k = 0;

	while (k < n && src[k] != '\0')
	{
	dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
	dest[k] = '\0';
		k++;
	}

}
