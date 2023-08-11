#include "main.h"
#include <stdlib.h>
#include <errno.h>

/**
 * main - copies the content of a file to another file.
 * @argc:
 * @argv:
 *
 * Return:
 */
int main(int argc, char *argv[]) 
{
	
	int fd_from, fd_to;
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	
	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n", "");
		exit(97);
	}	
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		close(fd_from);
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(fd_from);
			close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
        	}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
	dprintf(100, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return 0;
}

void exit(int code, const char *message, const char *arg)
{
    dprintf(STDERR_FILENO, message, arg);
    exit(code);
}
