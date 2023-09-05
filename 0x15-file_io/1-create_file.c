#include "main.h"

/**
 * create_file - create a file
 * @filename: file name.
 * @text_content: content writen on the file
 *
 * Return: 1 if it success or -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int letnum;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letnum = 0; text_content[letnum]; letnum++)
		;

	rwr = write(fd, text_content, letnum);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
