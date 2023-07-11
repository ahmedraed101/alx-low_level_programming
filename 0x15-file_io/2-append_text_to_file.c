#include "main.h"

/**
 * append_text_to_file - a function that appends text to a file
 * @filename: the name of the file
 * @text_content: the text to append to the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filep, len = 0, write_return;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		while (text_content[len])
			len++;
	filep = open(filename, O_WRONLY | O_APPEND);
	write_return = write(filep, text_content, len);

	if (write_return == -1 || filep == -1)
		return (-1);

	close(filep);
	return (1);
}
