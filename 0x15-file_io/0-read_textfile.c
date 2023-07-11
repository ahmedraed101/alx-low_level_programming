#include "main.h"


/**
 * read_textfile - is a function that reads a text file to stdout
 * @filename: a pointer to the filename array of char
 * @letters: the number of letters should be read and print
 *
 * Return: the number of letter read or 0 on Error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t t, filep, w;

	filep = open(filename, O_RDONLY);
	if (filep == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(filep, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(filep);
	return (w);

}
