#include "main.h"

/**
 * append_text_to_file - a function that appends text to
 * the end of a file.
 * @filename: input value
 * @text_content: input value
 *
 * Return: 1 on success otherwise, -1
 * if filename is NULL, -1
 * if text_content is NULL, 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int d, e, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	d = open(filename, O_WRONLY | O_APPEND);
	e = write(d, text_content, lent);

	if (d == -1 || e == -1)
		return (-1);

	close(d);

	return (1);
}
