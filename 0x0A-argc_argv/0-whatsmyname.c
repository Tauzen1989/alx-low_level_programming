#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argv: a pointer to an array of character strings
 * @argc: counts number of arguments
 * Return: always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
