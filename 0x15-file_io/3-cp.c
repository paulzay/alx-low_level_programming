#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * main - entry point
 * @argc: tbaa
 * @argv: pointer to tba
 * Return: 0 or 1
*/

int main(int argc, char const *argv[])
{
	int fd, fp;
	char buffer[BUFFER_SIZE];
	int bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file from_from file_to");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fp = open(argv[2], O_CREAT |  O_WRONLY | O_TRUNC, 0664);
	if (fp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}

	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fp, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	close(fd);
	close(fp);

	if (bytes_read == -1 || bytes_written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read or write to files\n");
		exit(100);
	}
	return (0);
}
