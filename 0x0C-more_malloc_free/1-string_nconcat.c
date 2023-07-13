#include "main.h"
#include <stdlib.h>

/**
 * strln - a function than mesures the length of a string.
 * @s: string to be measured
 * Return: length of a string
 */
unsigned int strln(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: input string
 * @s2: input string
 * @n: number of bytes to be allocated to s2
 * Return: pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a = 0, b = 0;
	unsigned int len1, len2;

	len1 = strln(s1);
	len2 = strln(s2);

	if (n < len2)

		p = malloc(sizeof(char) * (len1 + n + 1));

	else

		p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == 0)
		return (NULL);

	while (a < len1)
	{
		p[a] = s1[a];
		a++;
	}

	while (n < len2 && a < (len1 + n))

		p[a++] = s2[b++];

	while (n >= len2 && a < (len1 + len2))

		p[a++] = s2[b++];

	p[a] = '\0';

	return (p);

}
