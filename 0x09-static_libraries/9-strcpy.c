#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int m;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (m = 0 ; m < i ; m++)
	{
		dest[m] = src[m];
	}
	dest[i] = '\0';
	return (dest);
}
