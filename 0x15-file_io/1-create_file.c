#include "main.h"
/**
 * create_file - this function  creates a file
 * @filename: name of the file to be created
 * @text_content: contents of the file to be created
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nl, rwr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = " ";
	for (nl = 0; text_content[nl]; nl++)
		;
	rwr = write(fd, text_content, nl);
	if (rwr == -1)
		return (-1);
	close(fd);
	return (1);
}