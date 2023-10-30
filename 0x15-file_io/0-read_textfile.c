#include "main.h"

/**
 * read_textfile - function that reads textfile and prints it
 * @filename: filename
 * @letters: the no of letters
 * Return: no of letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, no_of_read, written;
	char *buf;

	buf = malloc(sizeof(*buf) * (letters + 1));

	if (buf == NULL || filename == NULL)
	{
		free(buf);
		return (0);
	}

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	no_of_read = read(fp, buf, letters);

	if (no_of_read == -1)
		return (0);

	buf[no_of_read] = '\0';

	written = write(STDOUT_FILENO, buf, no_of_read);
	if (written != no_of_read)
		return (0);

	free(buf);
	close(fp);
	return (no_of_read);
}
