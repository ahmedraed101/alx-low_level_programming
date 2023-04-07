#include "main.h"

/**
 * read_textfile - a function that reads text file to stdout
 * @filename: the text file to be read
 * @letters: the number of letters to read
 *
 * Return: the number of letters it reads and prints or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_n, write_n;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	read_n = read(fd, buf, letters);
	if (read_n == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	close(fd);
	write_n = write(STDOUT_FILENO, buf, read_n);
	free(buf);
	if (write_n == -1 || write_n != read_n)
		return (0);
	return (read_n);
}
