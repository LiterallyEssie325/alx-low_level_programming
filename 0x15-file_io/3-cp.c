#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - segregates 1024 bytes to a buffer
 * @file: input value
 *
 * Return: to the new buffer
 */
char *create_buffer(char *file)
{
	char *bean;

	bean = malloc(sizeof(char) * 1024);

	if (bean == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bean);
}

/**
 * close_file - ends decriptors of file
 * @fd: input value
 */
void close_file(int fd)
{
	int d;

	d = close(fd);

	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - program that copies the content of a file
 * to another
 * @argv: array of arguments
 * @argc: number of arguments
 *
 * Return: 0
 *
 * Description: if file already exists, truncate it
 * if file exist and you cant read it, exit(98)
 * if file cannot be created or written to, exit(99)
 * if descriptor of file cannot be closed, exit(100)
 *
 */
int main(int argc, char *argv[])
{
	int gone, come, c, s;
	char *bean;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	bean = create_buffer(argv[2]);
	gone = open(argv[1], O_RDONLY);
	c = read(gone, bean, 1024);
	come = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (gone == -1 || c == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(bean);
			exit(98);
		}
		s = write(come, bean, c);
		if (come == -1 || s == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(bean);
			exit(99);
		}
		c = read(gone, bean, 1024);
		come = open(argv[2], O_WRONLY | O_APPEND);
	} while (c > 0);

	free(bean);
	close_file(gone);
	close_file(come);

	return (0);
}
