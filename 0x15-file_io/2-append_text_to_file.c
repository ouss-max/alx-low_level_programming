#include "main.h"

/**
 * append_text_to_file - appends text at the end of 
 * a given  file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists or -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fn;
	int letnum;
	int co;

	if (!filename)
		return (-1);

	fn = open(filename, O_WRONLY | O_APPEND);

	if (fn == -1)
		return (-1);

	if (text_content)
	{
		for (letnum = 0; text_content[letnum]; letnum++)
			;

		co = write(fn, text_content, letnum);

		if (co == -1)
			return (-1);
	}

	close(fn);

	return (1);
}
