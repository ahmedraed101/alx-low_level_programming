#include "main.h"
#include <errno.h>

/**
 * create_file - function that creates a file
 * @filename: the name of the file to create
 * @text_content: the text content of the file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int filep, len, wr_letters;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		len = _strlen(text_content);

	filep = open(filename, O_WRONLY | O_CREAT | O_TRUNC | O_EXCL, 0600);
	if (filep == -1)
	{
		if (errno == EEXIST)
			filep = open(filename, O_WRONLY | O_TRUNC);
		if (filep == -1)
			return (-1);
	}

	wr_letters = write(filep, text_content, len);
	close(filep);
	if (wr_letters == -1)
		return (-1);
	return (1);
}
