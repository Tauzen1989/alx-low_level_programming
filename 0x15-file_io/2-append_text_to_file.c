#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: pointer to the input file
 * @text_content: string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_d;
	size_t len, bytes_w;

	if (filename == NULL)
		return (-1);
	f_d = open(filename, O_WRONLY | O_APPEND);
	if (f_d == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	len = 0;
	while (text_content[len] != '\0')
	{
		len++;
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
