#include "main.h"
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

#define BUF_SIZE 1024

void print_error_and_exit(int code, const char *message);

/**
 * main - copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int fd_from, fd_to;
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	char buffer[BUF_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		print_error_and_exit(97, "Usage: cp file_from file_to");
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error_and_exit(98, strerror(errno));
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		print_error_and_exit(99, strerror(errno));
	}
	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_error_and_exit(99, strerror(errno));
		}
	}
	if (bytes_read == -1)
	{
		print_error_and_exit(98, strerror(errno));
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		print_error_and_exit(100, strerror(errno));
	}

	return (0);
}

/**
 * print_error_and_exit - prints error message and code
 * @code: exit code
 * @message: message to be displayed
 *
 * Return: nothing
 */
void print_error_and_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(code);
}
