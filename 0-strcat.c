#include "main.h"

/**
 * _strcat - This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: destination string
 * @src: source string
 * Returns: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len1, len2;
        int k = 0, j = 0;
	
	while (dest[k]!='\0') 
	{	
		k++;
		len1++;
	}
	while (src[j] != '\0')
	{
		j++;
		len2++;
	}
	
	for (i = 0; i <= len2; i++)
	{
		src[i] = dest[len1 + i];
	}

	dest[k] = '\0';
	 return (0);
}
