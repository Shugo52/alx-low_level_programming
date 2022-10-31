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
	int fd1;
	int size, i;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	i = 0;
	fd1 = open(filename, O_RDWR);
	/*fd[1] = open(filename, O_RDWR);*/

	if (fd1 == -1 || filename == NULL)
		return (0);

	size = read(fd1, buffer, letters);
	close(fd1);
	while (buffer[i] != '\0')
	{
		_putchar(buffer[i]);
		i++;
	}
	return (size);
}
