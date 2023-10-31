#include "main.h"
/**
 * append_text_to_file - this function appends a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nl, rwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (nl = 0; text_content[nl]; nl++)
			;
		rwr = write(fd, text_content, nl);
		if (rwr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
