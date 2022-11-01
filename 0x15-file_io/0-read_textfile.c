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
	int fd1, size, i;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	i = 0;
	fd1 = open(filename, O_RDONLY);

	if (fd1 == -1 || !(filename))
		return (0);

	size = read(fd1, buffer, letters);
	if (size == -1)
		return (-1);
	close(fd1);
	while (buffer[i] != '\0')
	{
		_putchar(buffer[i]);
		i++;
	}
	return (size);
}
