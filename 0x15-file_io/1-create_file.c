#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - this function creates a file.
 * @filename: name of the file to create
 * @text_content: the string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_Written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_Written = write(fd, text_content, _strlen(text_content));
		if (bytes_Written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

/**
 * _strlen - tis function measures the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of a string.
 */
size_t _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
