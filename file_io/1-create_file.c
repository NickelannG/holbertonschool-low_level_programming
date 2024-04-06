#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: -1 on failure, or if filename or text_content is NULL, otherwise,
 * 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int length = 0;
	ssize_t byteswritten;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	/* Calculate length of text_content */
	if (text_content == NULL) /* empty file */
		length = 0;
	else
	{
		while (text_content[length] != '\0')
			length++;
	}
	byteswritten = write(fd, text_content, length);
	if (byteswritten == -1) /* If write fails */
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
