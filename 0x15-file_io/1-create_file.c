#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: input value
 * @text_content: input value
 *
 * Return: 1 on success otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int id, w, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	id = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(id, text_content, lent);

	if (id == -1 || w == -1)
		return (-1);
	close(id);

	return (1);
}
