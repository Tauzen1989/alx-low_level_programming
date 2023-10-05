#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - this function appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the input string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t text_len;
	ssize_t bytes_Written;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	text_len = _strlen(text_content);
	bytes_Written = write(fd, text_content, text_len);
	if (bytes_Written == -1)
	{
		close(fd);
		return (-1);
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
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	return (length);
}
