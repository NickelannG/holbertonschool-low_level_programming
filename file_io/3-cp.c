#include "main.h"

/**
 * main - Entry point of thr program
 *
 * @argc: Number of arguments
 * @argv: Command-line arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int fd1, fd2;
	ssize_t bytesread, byteswritten;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from fileto\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to file %s\n", argv[2]);
		close(fd1);
		exit(99);
	}
	while ((bytesread = read(fd1, buffer, 1024)) > 0)
	{
		byteswritten = write(fd2, buffer, bytesread);
		if (byteswritten != bytesread)
		{
			dprintf(STDERR_FILENO, "Error: Write failed for file %s\n", argv[2]);
			close(fd1);
			close(fd2);
			exit(99);
		}
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
