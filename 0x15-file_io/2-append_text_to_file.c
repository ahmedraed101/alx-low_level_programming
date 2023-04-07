#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: the text file to create
 * @text_content: the text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n = 0, write_n;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);


	while (*(text_content + n) != '\0')
		n++;
	write_n = write(fd, text_content, n);

	close(fd);
	if (write_n == -1)
		return (-1);
	return (1);
}
