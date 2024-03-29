#include "main.h"

/**
 * append_text_to_file - append
 * @filename: pointer to the file
 * @text_content: pointer to text
 * Return: 1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
