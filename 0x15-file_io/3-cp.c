#include "main.h"
#include <stdio.h>
/**
 * error_handler - checks if the file can be opened and handles errors
 * @file_from: file to be copied and to be checked
 * @file_to: destination of copied file
 * @argv: vector
 */
void error_handler(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies content from file_from to file_to
 * @argc: count
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_to, file_from, close_err;
	char buff[1024];
	ssize_t n_chars, nwr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_handler(file_from, file_to, argv);
	n_chars = 1024;
	while (n_chars == 1024)
	{
		n_chars = read(file_from, buff, 1024);
		if (n_chars == -1)
			error_handler(-1, 0, argv);
		nwr = write(file_to, buff, n_chars);
		if (nwr == -1)
			error_handler(0, -1, argv);
	}
	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_err = close(file_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
