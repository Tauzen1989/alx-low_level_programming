#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argv: a pointer to an array of character strings
 * @argc: counts number of arguments
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n ", argv[i]);
	}

	return (0);
}
