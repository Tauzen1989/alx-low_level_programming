#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: pointer to the input file
 * @letters: the number of letters that should be read and printed
 *
 * Return: the actual number of letters it could read and print, or
 * 0 if the file empty and can not be opened or read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	 int f_d;
	 char *buf;
	 ssize_t bytes_r, bytes_w;

	if (filename == NULL)
		return (0);
	f_d = open(filename, O_RDONLY);
	if (f_d == -1)
		return (0);
	buf = (char *)malloc(letters);
	if (buf == NULL)
	{
		close(f_d);
		return (0);
	}
	bytes_r = read(f_d, buf, letters);
	if (bytes_r < 0)
	{
		free(buf);
		close(f_d);
		return (0);
	}
	bytes_w = write(STDOUT_FILENO, buf, bytes_r);
	if (bytes_w < 0)
	{
		free(buf);
		close(f_d);
		return (0);
	}

	free(buf);
	close(f_d);
	return (bytes_w);
}
