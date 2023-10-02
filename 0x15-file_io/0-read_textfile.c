#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - this function reads a text file and prints it
 * to the POSIX standard output.
 * @filename: pointer to the buffer text file
 * @letters: letters to be read and written
 *
 * Return: the actual number of letters it could read and print
 * 0 - if the file can not be opened or read
 * 0 - if filename is NULL
 * 0 - if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytes_Read, bytes_Written;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}

	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	bytes_Read = read(file, buffer, letters);
	if (bytes_Read < 0)
	{
		close(file);
		free(buffer);
		return (0);
	}
	buffer[bytes_Read] = '\0';
	bytes_Written = write(STDOUT_FILENO, buffer, bytes_Read);
	if (bytes_Written != bytes_Read)
	{
		close(file);
		free(buffer);
		return (0);
	}

	close(file);
	free(buffer);

	return (bytes_Read);
}
