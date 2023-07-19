#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints the opcodes
 * of its own main function.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *p = (char *) main;
	int n, n_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (n = 0; n < n_bytes; n++)
	{
		printf("%02x", p[i] & 0xFF);
		if (n != n_bytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
