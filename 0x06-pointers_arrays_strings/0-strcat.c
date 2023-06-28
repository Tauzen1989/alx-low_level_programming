#include "main.h"
/**
 * _strcat - This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: destination string
 * @src: source string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{

	int k = 0, j = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	while (src[j] != '\0')
	{

	dest[k] = src[j];
		j++;
		k++;
	}

		dest[k] = '\0';

	return (dest);
}
