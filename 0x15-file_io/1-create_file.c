#include "main.h"

/**
 * create_file - function
 * @filename: pointer to file
 * @text_content: content
 * Return: 0
*/

int create_file(const char *filename, char *text_content)
{
	int fp, written, count;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
		{
			count++;
		}

		written = write(fp, text_content, count);

		if (written == -1)
		{	close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);

}
