#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argv: a pointer to an array of character strings
 * @argc: counts number of arguments
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{

	int num1, num2, res;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		res = num1 * num2;

	printf("%d\n", res);

	return (0);
}
