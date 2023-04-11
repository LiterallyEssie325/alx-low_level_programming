#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a textfile and prints it to the Standard output
 * @filename: input value
 * @letters: input value
 *
 * Return: actual numbers of letters
 * if filename is NULL, 0
 * if write fails, 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bea;
	ssize_t id;
	ssize_t v;
	ssize_t s;

	id = open(filename, O_RDONLY);
	if (id == -1)
		return (0);
	bea = malloc(sizeof(char) * letters);
	s = read(id, bea, letters);
	v = write(STDOUT_FILENO, bea, s);

	free(bea);
	close(id);
	return (v);
}
