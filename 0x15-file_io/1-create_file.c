#include "main.h"

/**
 * create_file - function
 * @filename: pointer to file
 * @text_content: content
 * Return: 0
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		return (-1);
	}
	bytes_written = write(fd, text_content, sizeof(text_content) - 1);

	if (bytes_written == -1)
		return (-1);
	close(fd);
	return (1);
}
