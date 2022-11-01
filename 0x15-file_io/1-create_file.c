#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: name of file to be created
 * @text_content: content of file created
 * Return: 1-success -1-fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, size;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
