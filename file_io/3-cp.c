#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message and exits with a given code.
 * @exit_code: The exit code to use.
 * @format: The error message format.
 * @arg: The argument to include in the error message.
 */
void error_exit(int exit_code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(exit_code);
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, exits with appropriate code on error.
 */
int main(int argc, char *argv[])
{
	int src_fd, dest_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "");

	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
	{
		close(src_fd);
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	while ((bytes_read = read(src_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(src_fd);
			close(dest_fd);
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}

	if (bytes_read == -1)
	{
		close(src_fd);
		close(dest_fd);
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	if (close(src_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd), exit(100);
	if (close(dest_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd), exit(100);

	return (0);
}

