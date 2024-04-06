#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: a pointer to the text file
 * @letters: the number of letters it should read and print
 *
 * Return: the number of letters it should reand and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t bytesread;
	ssize_t byteswritten;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1) /* Can't be opened */
		return (0);

	/* Allocate memory */
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytesread = read(fd, buffer, letters);
	if (bytesread == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	byteswritten = write(STDOUT_FILENO, buffer, bytesread);
	if (byteswritten == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytesread);
}
