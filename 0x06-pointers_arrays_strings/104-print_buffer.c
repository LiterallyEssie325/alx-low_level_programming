#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer.
 * @b: buer
 * @size: size
 * Return: 0
 */
void print_buffer(char *b, int size)
{
	int v, j, i;

	v = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (v < size)
	{
		j = size - v < 10 ? size - v : 10;
		printf("%08x: ", v);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + v + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + v + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		v += 10;
	}
}
