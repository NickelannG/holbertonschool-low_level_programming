#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: -1 on failure, or if filename or text_content is NULL, otherwise,
 * 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, byteswritten;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	/* Calculate length of text_content */
	if (text_content != NULL)
	{
		byteswritten = write(fd, text_content, strlen(text_content));
		/* If write fails */
		if (byteswritten == -1 || (size_t)byteswritten != strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
