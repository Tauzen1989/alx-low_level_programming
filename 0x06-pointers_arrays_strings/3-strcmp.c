#include "main.h"

/**
 * _strcmp -  a function that compares two strings.
 * @s1: input string to be compared to
 * @s2: input string to be compared to
 * Return: function should work exactly like strcmp
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int res = 0;

	for (i = 0; s1[i] != '\0' &&  s2[i] != '\0'; i++)
		{
			if (s1[i] != s2[i])
				{
					break;
				}
		}

		res = s1[i] - s2[i];

	return (res);
}
