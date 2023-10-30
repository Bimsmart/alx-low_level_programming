#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
/**
 * read_textfile - this function reads a file
 * @filename: the name of the file to be read
 * @letters: letters in the file
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_rd, n_wr;
	char *bf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	if (bf == NULL)
		return (0);
	n_rd = read(fd, bf, letters);
	n_wr = write(STDOUT_FILENO, bf, n_rd);
	close(fd);
	free(bf);
	return (n_wr);
}
