#include "main.h"

/**
 * append_text_to_file - adds data to end of file
 *
 * @filename: name of file to append to
 * @text_content: data to add to file
 * Return: 1-success -1-fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		size = write(fd, text_content, strlen(text_content));
		if (size == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
