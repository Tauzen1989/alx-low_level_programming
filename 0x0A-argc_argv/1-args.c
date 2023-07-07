#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it. 
 * @argv: a pointer to an array of character strings
 * @argc: counts number of arguments
 * Return: always 0 (success)
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
