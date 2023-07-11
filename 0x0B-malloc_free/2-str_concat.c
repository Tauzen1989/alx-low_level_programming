#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  a function that concatenates two strings.
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: a pointer to the concatenated string
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, n;

	if (s1 != NULL)
	for (i = 0; s1[i]; i++)
	if (s2 != NULL)
	for (n = 0; s2[n]; n++)

	s = (char *)malloc(sizeof(char) * (i + n + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	n = 0;
	while (s2[n] != '\0')
	{
		s[i] = s2[n];
		i++, n++;
	}
		s[i] = '\0';

	return (s);
}
