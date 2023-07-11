#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  a function that returns a pointer to
 * a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 * Return: a pointer to the duplicated string on success
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
		return (NULL);
	while (i--)
	{
		p[i] = str[i];
	}
		p[i] = '\0';
		return (p);
}
