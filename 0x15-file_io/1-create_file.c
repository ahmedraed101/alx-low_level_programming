#include "main.h"

/**
 * create_file - a function that created a file
 * @filename: the text file to create
 * @text_content: the content of the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, n = 0, write_n;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (*(text_content + n) != '\0')
			n++;
		write_n = write(fd, text_content, n);
	}

	close(fd);
	if (write_n == -1 && write_n != n)
		return (-1);
	return (1);
}
