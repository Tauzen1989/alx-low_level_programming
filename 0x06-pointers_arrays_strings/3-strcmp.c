#include "main.h"

/**
 * _strcmp -  a function that compares two strings.
 * @s1: input string to be compared to
 * @s2: input string to be compared to
 * Return: function should work exactly like strcmp
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int k = 0;
	int res = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[k] != '\0')
	{
		k++;
		i++;
	res = s1[i] - s2[k];
	}

	return (res);
}
