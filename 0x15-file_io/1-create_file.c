#include "main.h"

/**
 * create_file - function
 * @filename: pointer to file
 * @text_content: content
 * Return: 0
*/

int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, count = 0;

	if (filename == NULL)
		return (-1);

	/* int open ( char *path, int flags ) */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
		{
			count++;
		}
		bytes_written = write(fd, text_content, count);

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
