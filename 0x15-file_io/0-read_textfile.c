#include "main.h"

/**
 * read_textfile - reads content of file
 * to stdout
 *
 * @filename: name of file
 * @letters: number of letters in file
 * Return: Number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd1, size;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(letters + 1);
	fd1 = open(filename, O_RDONLY);

	if (fd1 == -1)
		return (0);

	size = read(fd1, buffer, letters);
	if (size == -1)
		return (0);

	dprintf(STDOUT_FILENO, "%s", buffer);
	close(fd1);

	return (size);
	free(buffer);
}
