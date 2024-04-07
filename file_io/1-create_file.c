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
	int fd, byteswritten;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	/* Calculate length of text_content */
	if (text_content != NULL)
	{
		byteswritten = write(fd, text_content, strlen(text_content));
		if (byteswritten == -1 || (size_t)byteswritten != strlen(text_content)) /* If write fails */
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
