#include "main.h"
#include <stdlib.h>

/**
 * create_file - a function that creates a file.
 * @filename: a pointer to the input file
 * @text_content:
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f_d, len, bytes_w;

	if (filename == NULL)
		return (-1);
	f_d = open(filename, O_RDWR | O_CREAT | O_TRUNC | O_EXCL, 0600);
	if (f_d == -1)
	{
		f_d = open(filename, O_RDWR | O_CREAT | O_EXCL, 0600);
		if (f_d == -1)
		{
			return (-1);
		}
	}
	len = 0;
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	bytes_w = write(f_d, text_content, len);
	if (bytes_w != len)
	{
		close(f_d);
		return (-1);
	}
	close(f_d);

	return (1);
}
