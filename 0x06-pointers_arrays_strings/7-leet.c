#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @s: input value
 * Return: s
 */
char *leet(char *s)
{
	int i, m;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (m = 0; m < 10; m++)
		{
			if (s[i] == str1[m])
			{
				s[i] = str2[m];
			}
		}
	}
	return (s);
}
