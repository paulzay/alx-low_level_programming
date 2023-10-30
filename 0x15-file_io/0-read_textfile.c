#include "main.h"

/**
 * read_textfile - function that reads textfile and prints it
 * @filename: filename
 * @letters: the no of letters
 * Return: no of letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;

	char buf[1024];

	fp = fopen(filename, "r");
	
	if (fp == NULL || filename ==NULL)
		return (0);

	while ((letters = fread(buf, 1, sizeof(buf),fp) > 0))
	{
		fwrite(buf, 1, letters, stdout);
	}
	
	fclose(fp);
	return (0);
}
